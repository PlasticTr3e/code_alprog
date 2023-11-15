#include <iostream>
using namespace std;

struct mahasiswa
{
    char NPM[8];
    char nama[20];
    int nilai;
};

typedef mahasiswa LarikMhs[10];
LarikMhs mhs;

void banyakData(int &n)
{
    cout << "Banyak data : ";
    cin >> n;
}
void inputMahasiswa(LarikMhs &Mhs, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan data ke-" << i << "\n";
        cout << "NPM\t: ";
        cin >> Mhs[i].NPM;
        cout << "Nama\t: ";
        cin >> Mhs[i].nama;
        cout << "Nilai\t: ";
        cin >> Mhs[i].nilai;
    }
}
void cetakMahasiswa(LarikMhs Mhs, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " ";
        cout << Mhs[i].NPM << " ";
        cout << Mhs[i].nama << "\t";
        cout << Mhs[i].nilai << endl;
    }
}

main()
{
    LarikMhs mhs;
    int n;
    banyakData(n);
    inputMahasiswa(mhs, n);
    cetakMahasiswa(mhs, n);
}
