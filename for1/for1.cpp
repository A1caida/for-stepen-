// степени, хз зачем
//25.03.19 и нахуя не понятно чего хочу
//20.10.19 я еблан блять. переписать надо будет, не так же работает

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
	system("chcp 1251>nul");
	int a, b , c=0;
	cout << "Какое число хотите умножить?\n"; 
	cin >> a;
	cout << "Степень?\n";
	cin >> b;
	for (c=1; c < b; c++) {

		a = pow(a, b);
		cout << a << " ";
	}
	system("pause>nul");
	return 0;
}

