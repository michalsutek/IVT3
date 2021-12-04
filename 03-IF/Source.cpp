#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout << "Zadaj a" << endl;
	cin >> a;
	cout << "Zadaj b" << endl;
	cin >> b;
	if (a == b)
	{
		cout << "Cisla sa rovnaju";
	}
	else
	{
		if (a > b)
			cout << "vacsie je " << a;
		else
			cout << "vacsie je " << b;
	}
	system("pause>0");
}