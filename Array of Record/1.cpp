#include <iostream>
#include <iomanip>
using namespace std;

struct waktu
{
    int jam, menit, detik;
};

void inputWaktu(waktu &input)
{
    cout << "Masukkan Jam: ";
    cin >> input.jam;
    cout << "Masukkan Menit: ";
    cin >> input.menit;
    cout << "Masukkan detik: ";
    cin >> input.detik;
}

void konversiWaktu(waktu &input)
{
    if (input.detik >= 60)
    {
        input.menit += (input.detik / 60);
        input.detik = input.detik % 60;
    }
    if (input.menit >= 60)
    {
        input.jam += (input.menit / 60);
        input.menit = input.menit % 60;
    }
    if (input.jam >= 24)
    {
        input.jam -= 24;
    }
}

void cetakWaktu(waktu &input)
{
    cout << setfill('0') << setw(2) << input.jam << ":";
    cout << setfill('0') << setw(2) << input.menit << ":";
    cout << setfill('0') << setw(2) << input.detik;
}

int main()
{
    waktu waktu_;
    inputWaktu(waktu_);
    konversiWaktu(waktu_);
    cetakWaktu(waktu_);
}