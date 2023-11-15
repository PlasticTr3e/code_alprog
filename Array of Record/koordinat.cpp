#include <iostream>
using namespace std;

struct koordinat
{
    float x, y;
};

void inputTitik(koordinat &titik, int n)
{
    cout << "Masukkan titik ";
    if (n == 0)
    {
        cout << "A (x y): ";
    }
    else
    {
        cout << "B (x y): ";
    }
    cin >> titik.x >> titik.y;
}

void cetakKoordinat(koordinat &titik, char namaTitik)
{
    if (namaTitik == 'E')
    {
        namaTitik = 'T';
    }

    cout << namaTitik << "(" << titik.x << ", " << titik.y << ")" << endl;
}

void titikT(koordinat titik[])
{
    titik[2].x = titik[1].x - titik[0].x;
    titik[2].y = titik[1].y - titik[0].y;
}

void titikC(koordinat titik[])
{
    titik[3].x = titik[0].x;
    titik[3].y = (titik[0].y) * -1;
}

void titikD(koordinat titik[])
{
    titik[4].x = (titik[0].x) * -1;
    titik[4].y = titik[0].y;
}

int main()
{

    koordinat koordinat[5];
    for (int i = 0; i < 2; i++)
    {
        inputTitik(koordinat[i], i);
    }

    titikT(koordinat);
    titikC(koordinat);
    titikD(koordinat);

    for (int i = 0; i < 5; i++)
    {
        char titik = 'A';
        cetakKoordinat(koordinat[i], titik + i);
    }

    return 0;
}