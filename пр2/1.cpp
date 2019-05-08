    
#include "pch.h"
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float k, m;
	float a = 4.8;
	float b = -7.9;
	if (a >= b) {
		k = pow(a - b, 1.0 / 3);
	}
	if (a < b) {
		k = a * a + (a - b) / sin(a*b);
	}
	if (k == b) {
		k = k * k + tan(k*a);
	}
	if (k > b) {
		m = b * b * b + k * a * a;
	}
	if (k < b) {
		m = ((k + a) / -b) + sqrt(sin(a)*sin(a) - cos(k));
	}
	cout << "Число a равно:" << a << endl;
	cout << "Число b равно:" << b << endl;
	cout << "Число k равно:" << k << endl;
	cout << "Число m равно:" << m << endl;
}
