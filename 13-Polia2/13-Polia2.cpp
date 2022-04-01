#include <iostream>
using namespace std;

int main()
{
	const int PocetPrvkov = 10; //konštanta
	int pole[PocetPrvkov] = {};
	//naplnenie pola nahodnymi cislami z rozsahu 10-99
	srand(time(NULL));
	for (int i = 0; i < PocetPrvkov; i++)
	{
		pole[i] = rand() % 90 + 10;
	}

	//vypis vsetkych prvkov pola
	for (int i = 0; i < PocetPrvkov; i++)
	{
		cout << i << ". prvok: " << pole[i] << endl;
	}

	//vypocet priemernej hodnoty prvkov
	float sucet = 0;
	for (int i = 0; i < PocetPrvkov; i++)
	{
		sucet = sucet + pole[i];
	}
	float priemer;
	priemer = sucet / PocetPrvkov;
	cout << "Priemerna hodnota je: " << priemer << endl;

	//vyhladanie najmensej hodnoty v poli
	int min = pole[0];
	int indexMin = 0;
	for (int i = 1; i < PocetPrvkov; i++)
	{
		if (pole[i] < min)
		{
			min = pole[i];
			indexMin = i;
		}
	}
	cout << "Najmensia hodnota je: " << min << " a je to prvok: " << indexMin << endl;

}