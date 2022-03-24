#include <iostream>
using namespace std;
int main()
{
	const int pocetdni = 10;
	int teploty[pocetdni] = {};
	float sucet;
	float priemer;

	srand(time(NULL));

	//naplnenie pola teploty nahodnymi teplotami z rozsahu 10-20
	for (int i = 0; i < pocetdni; i++)
	{
		teploty[i] = rand() % 11 + 10;
	}

	//vypis pola teploty
	cout << "Dni s nameranymi teplotami:" << endl;
	for (int i = 0; i < pocetdni; i++)
	{
		cout << i + 1 << ". den: " << teploty[i] << endl;
	}


	//vypocet priemernej teploty
	sucet = 0;
	for (int i = 0; i < pocetdni; i++)
	{
		sucet = sucet + teploty[i];
	}
	priemer = sucet / pocetdni;
	cout << "Priemerna teplota je: " << priemer << endl;

	//vypis dni s nadpriemernymi teplotami
	cout << "Dni s nadpriemernou teplotou:" << endl;
	for (int i = 0; i < pocetdni; i++)
	{
		if (teploty[i] > priemer)
		{
			cout << i + 1 << ". den: " << teploty[i] << endl;
		}
	}

	//vyhladanie a vypis dna s najvacsou teplotou
	int MaxTeplota;
	MaxTeplota = teploty[0];
	int DenMaxTeplota;
	for (int i = 1; i < pocetdni; i++)
	{
		if (teploty[i] > MaxTeplota)
		{
			MaxTeplota = teploty[i];
			DenMaxTeplota = i + 1;

		}
	}
	cout << "Najvyssia teplota bola " << MaxTeplota << " namerana " << DenMaxTeplota << ". den";
}