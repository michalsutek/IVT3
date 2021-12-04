#include <iostream>
using namespace std;

int main()
{
	float bmi, vyska, vaha;
	cout << "Zadaj vysku v cm: " << endl;
	cin >> vyska;
	cout << "Zadaj hmotnost v kg: " << endl;
	cin >> vaha;
	bmi = vaha / vyska * vyska;
	cout << "Tvoje BMI je " << bmi;

}