#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

struct tochka {
	double x, y;
};

struct Vektor {
	tochka a, b;
};

int main()
{
	Vektor ab = { {1,5}, {5.6,3.2} };
	system("pause");
	return 0;
}