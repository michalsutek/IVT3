#include <iostream>
using namespace std;

int main()
{
	float cislo1,cislo2; // definícia premenných
	char operacia;

	cout << "Zadaj 1. cislo: "; // výpis správy na obrazovku
	cin >> cislo1; // načítanie hodnoty do premennej z klávesnice
	cout << "Zadaj 2. cislo: ";
	cin >> cislo2;
	cout << "Zadaj operaciu(+-*/ ) : ";
	cin >> operacia;

	cout << "Vysledok je : ";
	if (operacia == '+') // testovanie, či sa zadal znak +
	{
		cout << cislo1 + cislo2; // ak sa zadal znak +, nastane súčet
	}
	else if (operacia == '-') // operácia rozdielu
	{
		cout << cislo1 - cislo2;
	}
	else if (operacia == '*') // operácia súčinu
	{
		cout << cislo1 * cislo2;
	}
	else if (operacia == '/') // operácia podiel
	{
		cout << cislo1 / cislo2;
	}
	else // ak nebola žiadna z predošlých podmienok pravdivá
		cout << "Zadal si zlu operaciu";
	cout << endl; // výpis nového riadku bude vždy
	system("cls");
	system("pause>0");


}
