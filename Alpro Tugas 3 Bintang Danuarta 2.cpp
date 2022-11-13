#include <iostream>
using namespace std;

int main () {

   float praktikum, NilaiUts, NilaiUas, NilaiAkhir;

   cout << "program menghitung nilai akhir mahasiswa" << endl;
   cout << "----------------------------------------" << endl;

   cout << "masukan nilai praktikum : ";
   cin >> praktikum;

   cout << "masukan nilai uts : ";
   cin >> NilaiUts;

   cout << "masukan nilai uas : ";
   cin >> NilaiUas;

   NilaiAkhir = ((praktikum*0.2)+(NilaiUts*0.3)+(NilaiUas*0.8));

   cout<<endl;
   cout<<"nilai ahkir : "<<NilaiAkhir<<endl;

   return 0;
   }
