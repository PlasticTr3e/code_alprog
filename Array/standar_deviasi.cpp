#include <iostream>
#include <cmath>
using namespace std;

void standar_deviasi(int input[], int n){
    int rata;
    int total = 0;
    int jumlah = 0;
    for(int i = 0; i < n; i++){
        jumlah += input[i];
    }
    rata = jumlah/n;
    for (int i = 0; i < n; i++)
    {
        total += (input[i] - rata) * (input[i] - rata);
    }

    cout << sqrt(total/(n - 1));
    
}

int main(){
    int n;
    cout << "Input Banyak Data: ";
    cin >> n;
    int data[n];
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }
    standar_deviasi(data, n);
    


    return 0;
}