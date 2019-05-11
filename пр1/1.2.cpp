#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float x, y, a, b;
	cout << "Введите первое число:" << endl;
	cin >> x;
	cout << "Введите второе число:" << endl;
	cin >> y;
	a = x + y;
	b = x - y;
	cout << "Сумма чисел равна:" << a << endl;
	cout << "Разность чисел равна:" << b << endl;
}