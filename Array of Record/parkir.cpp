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

int biayaParkir(waktu waktuMasuk, waktu waktuKeluar)
{
    int biaya = 0;
    int totalJam = waktuKeluar.jam - waktuMasuk.jam;
    if (totalJam <= 1 && totalJam > 0)
    {
        biaya = 2000;
    }
    else if (totalJam > 1)
    {
        biaya = 2000 + (totalJam - 1) * 1000;
    }
    else
    {
        return 0;
    }
    return biaya;
}

int main()
{
    waktu waktuMasuk, waktuKeluar;
    cout << "Masukkan waktu masuk: " << endl;
    inputWaktu(waktuMasuk);
    cout << "Masukkan waktu keluar: " << endl;
    inputWaktu(waktuKeluar);

    konversiWaktu(waktuMasuk);
    konversiWaktu(waktuKeluar);

    cout << "\n";

    cout << "Waktu masuk anda adalah\t\t: ";
    cetakWaktu(waktuMasuk);
    cout << endl;
    cout << "Waktu keluar anda adalah\t: ";
    cetakWaktu(waktuKeluar);
    cout << endl;
    cout << "Biaya parkir anda adalah\t: ";
    cout << biayaParkir(waktuMasuk, waktuKeluar);
}