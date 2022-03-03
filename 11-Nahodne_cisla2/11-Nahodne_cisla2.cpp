#include <iostream>
#include <cstdlib> 
using namespace std;

int main()
{
    int nahoda, pocet;
    int parne = 0;
    int neparne = 0;
    int jedna = 0;
    int dva = 0;
    int tri = 0;
    int styri = 0;
    int pat = 0;
    int sest = 0;
    int sedem = 0;
    int osem = 0;
    int devat = 0;

    srand(time(NULL));

    cout << "Zadaj pocet nahodnych cisiel:" << endl;
    cin >> pocet;
    cout << "Nahodne cisla:" << endl;
    for (int i = 1; i <= pocet; i++)
    {
        nahoda = rand() % 9 + 1;
        cout << nahoda << " - ";
        switch (nahoda)
        {
        case 1:
            jedna++;
            break;
        case 2:
            dva++;
            break;
        case 3:
            tri++;
            break;
        case 4:
            styri++;
            break;
        case 5:
            pat++;
            break;
        case 6:
            sest++;
            break;
        case 7:
            sedem++;
            break;
        case 8:
            osem++;
            break;
        case 9:
            devat++;
            break;
        }
        if (nahoda % 2 == 1)
        {
            cout << "neparne";
            neparne++;
        }
        else
        {
            cout << "parne";
            parne++;
        }
        cout << endl;
    }
    cout << "Pocet parnych cisiel: " << parne << endl;
    cout << "Pocet neparnych cisiel: " << neparne << endl;

    cout << "Pocet 1: " << jedna << endl;
    cout << "Pocet 2: " << dva << endl;
    cout << "Pocet 3: " << tri << endl;
    cout << "Pocet 4: " << styri << endl;
    cout << "Pocet 5: " << pat << endl;
    cout << "Pocet 6: " << sest << endl;
    cout << "Pocet 7: " << sedem << endl;
    cout << "Pocet 8: " << osem << endl;
    cout << "Pocet 9: " << devat << endl;
}