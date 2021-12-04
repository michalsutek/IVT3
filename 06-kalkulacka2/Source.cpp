# include <iostream>
using namespace std;

int main()
{
    char operacia,odpoved;
    float cislo1, cislo2;
    do
    {
        system("cls");
        cout << "Zadaj priklad napr. 10 + 5" << endl;
        cin >> cislo1 >> operacia >> cislo2;
        switch (operacia)
        {
        case '+':
            cout << cislo1 << " + " << cislo2 << " = " << cislo1 + cislo2;
            break;

        case '-':
            cout << cislo1 << " - " << cislo2 << " = " << cislo1 - cislo2;
            break;

        case '*':
            cout << cislo1 << " * " << cislo2 << " = " << cislo1 * cislo2;
            break;

        case '/':
            cout << cislo1 << " / " << cislo2 << " = " << cislo1 / cislo2;
            break;

        default:
            cout << "Zly operator!!!";
            break;
        }
        cout << endl << "Chces pokracovat? (a/n)" << endl;
        cin >> operacia;
    } while (operacia == 'a');
    return 0;
}