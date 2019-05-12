#include "pch.h"
#include <iostream>
using namespace std;

void insert(int*a, int size) {	//целые числа
	int r_border = 0;   //крайний правый отсортированный элемент
	for (int i = 1; i < size; i++) {
		int current = i;					//первый эл. отсортирован
		for (int j = r_border; j >= 0; j--) { //находим место среди уже отсортированных
			if (a[current] > a[j]) break;
			else {
				swap(a[current], a[j]);
				current -= 1;
			}
		}
		r_border += 1;
	}
}

void insert(double *a, int size) { //дробные числа
	int r_border = 0;
	for (int i = 1; i < size; i++) {
		int current = i;
		for (int j = r_border; j >= 0; j--) {
			if (a[current] > a[j]) break;
			else {
				swap(a[current], a[j]);
				current -= 1;
			}
		}
		r_border += 1;
	}
}

int main(int argc, char* argv[])
{
	int a[10] = { 2, 2, 1, 1, 88, -24, 23, -13, 0, 6 };
	double b[10] = { 2.07, -11.4, 1.226, 0.345, 3.14, -18.44, 19, 44.05, -4.52, 52 };
	insert(a, 10);
	insert(b, 10);

	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}