#include <iostream>
using namespace std;

int main()
{
    //float rocnyplat;
    //cout << "Zadaj tvoj rocny plat ";
    //cin >> rocnyplat;
    //float mesacnyplat = rocnyplat / 12;
    //cout << "Tvoj mesacny plat je " << mesacnyplat << endl;
    //cout << "Za 10 rokov zarobis " << rocnyplat * 10;

    //char znak = 'a';


    int rokNarodenia = 2000;
    char pohlavie = 'm';
    bool starsiAko18 = true;
    float priemernaZnamok = 1.5;
    double velkeCislo = 6547348539;

    cout << "Velkost int je " << sizeof(int) << endl;
    cout << "Minimalna hodnota int je " << INT_MIN << endl;
    cout << "Maximalna hodnota int je " << INT_MAX << endl;

    cout << "Velkost char je " << sizeof(char) << endl;
    cout << "Minimlna hodnota char je " << CHAR_MIN << endl;
    cout << "Maximalna hodnota char je " << CHAR_MAX << endl;

    int maxInt = INT_MAX;
    cout << maxInt + 1;

    system("pause>0");
}
