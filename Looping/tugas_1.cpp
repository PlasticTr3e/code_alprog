/*Nama program  : tugas_1.cpp
  Nama          : Bagas Diatama Wardoyo
  NPM           : 140810230061
  Tanggal buat  : 30/09/2023
  Deskripsi     : Cek bilangan prima.
*/
#include <iostream>
using namespace std;

int main(){

    int x;
    bool cek = 1;
    cin >> x;


    for(int i = 2; i < x; i++){
      if(x % i == 0){
        cek = 0;
        break;
      }
    }

    if(x <= 1){
      cek = 0;
    }

    if(cek){
        cout << x << " adalah bilangan prima";
    }else{
        cout << x << " bukan bilangan prima";
    }

    return 0;
}