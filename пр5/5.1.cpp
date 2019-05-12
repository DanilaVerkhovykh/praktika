#include "pch.h"
#include <iostream>
using namespace std;

void buble(int *a, int size) {  //целые числа
	while (true) {
		bool bingo = true;
		for (int i = 0; i < size - 1; i++) {
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
				bingo = false;
			}
		}
		if (bingo) break;
	}
}

void buble(double *a, int size) { //дробные числа
	while (true) {
		bool bingo = true;
		for (int i = 0; i < size - 1; i++) {
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
				bingo = false;
			}
		}
		if (bingo) break;
	}
}

int main(int argc, char* argv[])
{
	int a_int[10] = { 1, 2, 3, 4, 4, 11, 12, 3, 6, 8 };
	double a_double[10] = { 10, 4.5, 5.22 , 1.87, 2.12, 0.9, 8.3, 3, 5.343, 7.5 };
	buble(a_int, 10);
	buble(a_double, 10);
	for (int i = 0; i < 10; i++) {
		cout << a_int[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << a_double[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}