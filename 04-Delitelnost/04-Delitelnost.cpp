#include <iostream>
using namespace std;

int main()
{
	int cislo;
	cout << ("Zadaj cislo:") << endl;
	cin >> cislo;
	if (cislo % 2 == 0)
	{
		cout << "Cislo " << cislo << " je parne" << endl;
	}
	else
	{
		cout << "Cislo " << cislo << " je neparne" << endl;
	}

	system("pause>0");
}
