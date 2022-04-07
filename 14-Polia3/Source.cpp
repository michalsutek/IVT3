#include <iostream>
using namespace std;

int main()
{
    float v, pomoc;
    int pocet;
    const int PocetPrvkov = 10;
    int pole[PocetPrvkov] = {};
    srand(time(NULL));

    // naplnenie vsetkych prvkov pola cislami z rozsahu 100..199 a vypis pola
    cout << "Vypis pola:" << endl;
    for (int i = 0; i < PocetPrvkov; i++)
    {
        pole[i] = rand() % 100 + 100;
        cout << i << ". prvok: " << pole[i] << endl;
    }
    cout << endl;

    //vypis prvkou s vacsou hodnotou aku zada uzivatel
    cout << "Zadaj cislo pre vypis prvkov s vacsou hodnotou:" << endl;
    cin >> v;
    cout << "Prvky s vacsou hodnotou ako " << v << ":" << endl;
    for (int i = 0; i < PocetPrvkov; i++)
    {
        if (v < pole[i])
        {

            cout << i << ". prvok: " << pole[i] << endl;
        }
    }
    cout << endl;

    //vypis prvkou s parnou hodnotou
    cout << "Prvky s parnou hodnotou:" << endl;
    for (int i = 0; i < PocetPrvkov; i++)
    {
        pocet = pole[i] % 2;

        if (pocet == 0)
        {
            cout << i << ". prvok: " << pole[i] << endl;
        }
    }
    cout << endl;

    //vymena nulteho prvku s poslednym prvkom
    pomoc = pole[0];
    pole[0] = pole[PocetPrvkov - 1];
    pole[PocetPrvkov - 1] = pomoc;
    cout << "Vypis pola po vymene nulteho prvku s poslednym:" << endl;
    for (int i = 0; i < PocetPrvkov; i++)
    {

        cout << i << ". prvok: " << pole[i] << endl;
    }

    system("pause>0");
}