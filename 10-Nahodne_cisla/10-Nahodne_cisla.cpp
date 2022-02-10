#include <iostream>
#include <cstdlib> //kniznica potrebna na pracu s nahodnymi cislami
using namespace std;


int main()
{
    srand(time(NULL)); //inicializuje generator nahodnych cisel
    int nahoda;
    int pocitadlo = 0;
    do
    {
        nahoda = rand() % 6 + 1; //rand() generuje nahodne cislo
        cout << nahoda << endl;
        pocitadlo++;
    } while (nahoda != 6); //!= je vlastne nerovna sa
    cout << "6tku si hodil na " << pocitadlo << " pokus" << endl;

}


