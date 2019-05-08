
#include "pch.h"
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float y, t;
	float a = 3.5;
	float x = -0.7;
	if (a <= x) {
		y = a + log(x + a);
	}
	if (a > x) {
		y = sqrt(sin(a*x));
	}
	if (a > y) {
		t = y / (a - x);
	}
	if (a == y) {
		t = y / (a - x) + (a + x) / (y*y);
	}
	if (a < y) {
		t = tan(a*x) + cos(2 * a*y);
	}
	cout << "Число a равно: " << a << endl;
	cout << "Число x равно: " << x << endl;
	cout << "Число y равно: " << y << endl;
	cout << "Число t равно: " << t << endl;
}