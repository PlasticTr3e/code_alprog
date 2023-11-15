#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int jam, menit, detik;
    char format12jam [2];

    cin >> jam;
    cin.ignore();
    cin >> menit;
    cin.ignore();
    cin >> detik;
    cin.ignore();
    cin.get(format12jam, 2);


    while(detik >= 60){
        detik = detik - 60;
        menit = menit + 1;
    }while(menit >= 60){
        menit = menit - 60;
        jam = jam + 1;
    }

        if(jam >= 12 && format12jam[0] == 'A')
        {
                jam = 0;
        }else if(format12jam[0] == 'P')
        {
        jam = jam + 12;
        }
    
    cout << setw(2) << setfill('0') << jam << ":" << setw(2) << setfill('0') << menit << ":" << setw(2) << setfill('0') << detik;

    return 0;
}