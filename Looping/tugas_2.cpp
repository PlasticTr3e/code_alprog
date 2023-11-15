/*Nama program  : tugas_2.cpp
  Nama          : Bagas Diatama Wardoyo
  NPM           : 140810230061
  Tanggal buat  : 30/09/2023
  Deskripsi     : Membalik urutan angka.
*/
#include <iostream>
using namespace std;

int main(){

    int input, input_terbalik = 0;
    cin >> input;

    while(input != 0) {
        input_terbalik = input_terbalik * 10 + (input % 10);
        input = input / 10;
    }
    
    cout << input_terbalik;

    return 0;
}