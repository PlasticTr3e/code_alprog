#include <iostream>
using namespace std;

void print_array(int arr[], int n){
    cout << "Hasil Shorting: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int& a, int & b){
    int temp = a;
    a = b;
    b = temp;
}

void bubbleshort(int arr[], int n, char des_asc){
    if (des_asc == 'A')
    {
        for (int i=n-1; i > 0; i--){
		for (int j=0; j < i; j++) {
			if (arr[j] > arr[j+1] )
				swap (arr[j], arr[j+1]);
		}
    }
    print_array(arr, n);
    }else if (des_asc == 'B')
    {
        for (int i=n-1; i > 0; i--){
		for (int j=0; j < i; j++) {
			if (arr[j] < arr[j+1] )
				swap (arr[j], arr[j+1]);
		}
    }
    print_array(arr, n);
    }else
    {
         print_array(arr, n);
    }
}

void selectionshort(int arr[], int n, char des_asc){
    int posisi;
    if (des_asc == 'A')
    {
        for (int i=0; i < n-1; i++){
		posisi = i;
		for (int j=i+1; j < n; j++) {
			if (arr[posisi] > arr[j]) {
				posisi = j; 
			}
		}
		swap (arr[i], arr[posisi]);
	}
    print_array(arr, n);
    }else if (des_asc == 'B')
    {
        for (int i=0; i < n-1; i++){
		posisi = i;
		for (int j=i+1; j < n; j++) {
			if (arr[posisi] < arr[j]) {
				posisi = j; 
			}
		}
		swap (arr[i], arr[posisi]);
	}
    print_array(arr, n);
    }else
    {
        print_array(arr, n);
    }
    
	
}

void insertionshort(int arr[], int n, char des_asc){
    if(des_asc == 'A'){
        for (int i = 1; i < 6; i++) {
        for (int j = i; j >= 1; j--){
            if (arr[j] < arr[j-1]) {
                swap(arr[j], arr[j-1]);
            }
            else
                break;
        }
    }
    print_array(arr, n);
    }else if(des_asc == 'B'){
        for (int i = 1; i < 6; i++) {
        for (int j = i; j >= 1; j--){
            if (arr[j] > arr[j-1]) {
                swap(arr[j], arr[j-1]);
            }
            else
                break;
        }
    }
    }else
    {
        print_array(arr, n);
    }
    
}

void shellshort(int arr[], int n, char des_asc){
    int j;
    if (des_asc == 'A')
    {
        for (int gap = n / 2; gap > 0; gap /= 2)  {
		for (int i = gap; i < n; i++) {
			int temp = arr[i];
	   		for (j=i; j>=gap && temp < arr[j - gap]; j -= gap){
		  		arr[j] = arr[j - gap];
	   		}
	   		arr[j] = temp;
		}
	}
    print_array(arr, n);
    }else if (des_asc == 'B')
    {
        for (int gap = n / 2; gap > 0; gap /= 2)  {
		for (int i = gap; i < n; i++) {
			int temp = arr[i];
	   		for (j=i; j>=gap && temp > arr[j - gap]; j -= gap){
		  		arr[j] = arr[j - gap];
	   		}
	   		arr[j] = temp;
		}
	}
    print_array(arr, n);
    }else
    {
        print_array(arr, n);
    }
	
}

void halamanDepan(){
    cout << "==================" << endl;
    cout << "1. Bubble Short" << endl;
    cout << "2. Selection Short" << endl;
    cout << "3. Insertion Short" << endl;
    cout << "4. Shell Short" << endl;
    cout << "(A)Asendig/ (B)Desending" << endl;
    cout << "==================" << endl;
}

int main(){
    int data[100], jumlah_data;
    bool loop = 1;
    cout << "JUMLAH DATA: ";
    cin >> jumlah_data;
    cout << "INPUT DATA: " << endl;
    for (int i = 0; i < jumlah_data; i++)
    {
        cin >> data[i];
    }

    while (loop)
    {
        halamanDepan();
        int input_user_1;
        char input_user_2;
        cout << "Masukkan Pilihan Anda: ";
        cin >> input_user_1 >> input_user_2;
        switch(input_user_1)
        {
        case 1:
            bubbleshort(data, jumlah_data, input_user_2);
            break;
        case 2:
            selectionshort(data, jumlah_data, input_user_2);
            break;
        case 3:
            insertionshort(data, jumlah_data, input_user_2);
            break;
        case 4:
            shellshort(data, jumlah_data, input_user_2);
            break;
        default:
            loop = 0;
            break;
        }
    }
    
    return 0;
}