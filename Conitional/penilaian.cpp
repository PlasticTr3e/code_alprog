/*Nama program  : penilaian.cpp
  Nama          : Bagas Diatama Wardoyo
  NPM           : 140810230061
  Tanggal buat  : 22/09/2023
  Deskripsi     : Buatlah program untuk penjlajan dengan syarat ( 100 >= A >80; >70 = B, >65 = C, >50 = D, sisanya = E)
*/

#include <iostream>
using namespace std;

int main(){

    int nilai;
    cout << "Masukan nilai: ";
    cin >> nilai;

    if(nilai <= 100 && nilai > 80){
        cout << "A";
    }else if(nilai <= 80 && nilai > 70){
        cout << "B";
    }else if(nilai <= 70 && nilai > 65){
        cout << "C";
    }else if(nilai <= 65 && nilai > 50){
        cout << "D";
    }else{
        cout << "E";
    }


    return 0;
}