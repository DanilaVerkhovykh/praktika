#include "pch.h"
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float z, t;
	float a = -0.6;
	float b = 5.3;
	if (a < b) {
		z = sqrt(abs(a*a - b * b));
	}
	if (a >= b) {
		z = 1 - 2 * cos(a)*sin(b);
	}
	if (z < b) {
		t = pow(z + a * a*b, 1.0 / 3);
	}
	if (z == b) {
		t = 1 - log(z) + cos(a*a*b);
	}
	if (z > b) {
		t = 1 / cos(z*a);
	}
	cout << "Число a равно:" << a << endl;
	cout << "Число b равно:" << b << endl;
	cout << "Число z равно:" << z << endl;
	cout << "Число t равно:" << t << endl;
}