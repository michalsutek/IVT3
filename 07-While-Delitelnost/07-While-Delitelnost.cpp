#include <iostream>
using namespace std;

int main()
{
    int cislo;
    cout << "Zadaj cislo:\n";
    cin >> cislo;
    cislo = 100;
    while (cislo <= 300)
    {
        if (cislo % 3 == 0)
        {
            cout << cislo << endl;
        }
        cislo = cislo + 1;
    }
}
