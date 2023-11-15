/*Nama program  : koversi_format12jam_to_format24jam.cpp
  Nama          : Bagas Diatama Wardoyo
  NPM           : 140810230061
  Tanggal buat  : 22/09/2023
  Deskripsi     : Diberikan waktu format 12-jam AM/PM, ubah ke dalam format 24 jam.
*/

#include <iostream>
using namespace std;
 
 
int main(){
    char format12jam[11];
    int jam, menit, detik;

    cin.getline(format12jam, 11); 
    
    jam = (int(format12jam[0] - '0') * 10) + (int(format12jam[1] - '0'));   
    menit = (int(format12jam[3] - '0') * 10) + (int(format12jam[4] - '0')); 
    detik = (int(format12jam[6] - '0') * 10) + (int(format12jam[7] - '0'));

    if((jam >= 1 && jam <=  12) && (menit >= 0) && (detik <= 59)){
        if(jam == 12 && format12jam[9] == 'A') 
        {  
            cout << "00" << ":" << menit << ":" << detik;
        }else if(format12jam[9]== 'P') 
        {
            jam += 12;
        }
        cout << jam << ":" << menit << ":" << detik;
    }
    return 0;
   }

    