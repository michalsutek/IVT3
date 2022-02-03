#include <iostream>
using namespace std;

int main()
{
    int znamka, pocet;
    float sucet = 0;
    float priemer;

    //riesenie for cyklom, pocet znamok zada uzivatel
    /*
    cout << "Zadaj pocet znamok" << endl;
    cin >> pocet;
    for (int i = 1; i <= pocet; i++)
    {
        cout << "Zadaj znamku " << i << ":" << endl;
        cin >> znamka;
        sucet = sucet + znamka;
    }
    priemer = sucet / pocet;
    cout << "Priemer je: " << priemer << endl;
    */

    //riesenie do while cyklom, cyklus sa vykonava dovtedy kym nezadame znamku 0
    pocet = 0;
    do
    {
        cout << "Zadaj znamku " << pocet + 1 << ":" << endl;
        cin >> znamka;
        if (znamka > 0)
        {
            sucet = sucet + znamka;
            pocet++;
        }
    } while (znamka > 0);
    priemer = sucet / pocet;
    cout << "Priemer je: " << priemer << endl;
}
