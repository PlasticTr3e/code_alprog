/*Nama program  : tugas_3.cpp
  Nama          : Bagas Diatama Wardoyo
  NPM           : 140810230061
  Tanggal buat  : 30/09/2023
  Deskripsi     : Menggambar X  .
*/
#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= n; j++){
                if (j == i || j == (n + 1 - i)){
                    cout << "*";    
                }else{
                    cout << " ";
                }   
        }
        cout << endl;
    }
    return 0;
}
