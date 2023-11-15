#include<iostream>
using namespace std;

void inputMatrix(int matriks[][100], int baris, int kolum) {
    cout << "Masukkan elemen matriks: " << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolum; j++) {
            cin >> matriks[i][j];
        }
    }
}

void printMatrix(int matriks[][100], int baris, int kolum) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolum; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
}

void addMatrix(int matriks1[][100], int matriks2[][100], int result[][100], int baris, int kolum) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolum; j++) {
            result[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }
}

void multiplyMatrix(int matriks1[][100], int matriks2[][100], int result[][100], int baris1, int kolum1, int kolum2) {
    for (int i = 0; i < baris1; i++) {
        for (int j = 0; j < kolum2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < kolum1; k++) {
                result[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }
}

void transposeMatrix(int matriks[][100], int result[][100], int baris, int kolum) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolum; j++) {
            result[j][i] = matriks[i][j];
        }
    }
}

void sumRowsColumns(int matriks[][100], int baris, int kolum, int result[]) {
    for (int i = 0; i < baris; i++) {
        result[i] = 0;
        for (int j = 0; j < kolum; j++) {
            result[i] += matriks[i][j];
        }
    }
    
    for (int j = 0; j < kolum; j++) {
        result[baris + j] = 0;
        for (int i = 0; i < baris; i++) {
            result[baris + j] += matriks[i][j];
        }
    }
}


int main() {
    int matriks1[100][100], matriks2[100][100], result[100][100];
    int baris1, kolum1, baris2, kolum2;

    cout << "Masukkan jumlah baris matriks A: ";
    cin >> baris1;
    cout << "Masukkan jumlah kolom matriks A:";
    cin >> kolum1;
    inputMatrix(matriks1, baris1, kolum1);

    cout << "Masukkan jumlah baris matriks B: ";
    cin >> baris2;
    cout << "Masukkan jumlah kolom matriks B:";
    cin >> kolum2;
    inputMatrix(matriks2, baris2, kolum2);

    cout << "Matrix A:" << endl;
    printMatrix(matriks1, baris1, kolum1);

    cout << "Matrix B:" << endl;
    printMatrix(matriks2, baris2, kolum2);

    if (baris1 == baris2 && kolum1 == kolum2) {
        addMatrix(matriks1, matriks2, result, baris1, kolum1);
        cout << "Penjumlahan Matriks A dan B:" << endl;
        printMatrix(result, baris1, kolum1);

        multiplyMatrix(matriks1, matriks2, result, baris1, kolum1, kolum2);
        cout << "Perkalian Matriks A dan B:" << endl;
        printMatrix(result, baris1, kolum2);
    }

    cout << "Transpose dari Matriks A:" << endl;
    transposeMatrix(matriks1, result, baris1, kolum1);
    printMatrix(result, kolum1, baris1);

    int sumResult[100];
    sumRowsColumns(matriks1, baris1, kolum1, sumResult);
    cout << "Jumlah setiap baris dan kolom Matriks A:" << endl;
    for (int i = 0; i < baris1 + kolum1; i++) {
        cout << sumResult[i] << " ";
    }
    cout << endl;

    return 0;}