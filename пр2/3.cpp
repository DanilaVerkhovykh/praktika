#include "pch.h"
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float y, t;
	float a = 4.6;
	float b = 1.5;
	if (a <= b) {
		y = (a - b) / (a + b) * (a + b) / (a*a - a * b + b * b);
	}
	if (a > b) {
		y = a + log(b*b);
	}
	if (y == b) {
		t = (2 * y + sqrt(y*y - a)) / (2 * b - sqrt(a*a - y));
	}
	if (y < b) {
		t = sin(y)*sin(y) + 1 / (tan(a - b));
	}
	if (y > b) {
		t = -pow(abs(y * sin(a)), (1.0 / 3)) + 1 / (sqrt(y * cos(b)));
	}
	cout << "Число a равно:" << a << endl;
	cout << "Число b равно:" << b << endl;
	cout << "Число y равно:" << y << endl;
	cout << "Число t равно:" << t << endl;
}