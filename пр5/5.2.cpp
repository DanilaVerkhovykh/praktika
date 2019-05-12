#include "pch.h"
#include <iostream>
using namespace std;

void select(int*a, int size) { //функция выборной сортировки 
	int low = 0;      //чтобы функция не проходила через уже отсортированную часть
	int ind_min = 0; //индекс мин. эл.
	while (true) {
		int min = 1000;
		for (int i = low; i < size; i++) {
			if (a[i] < min) {
				min = a[i];
				ind_min = i;
			}
		}
		swap(a[low], a[ind_min]);
		low++;   //исключаем повторения, увеличиваем каждый раз на 1
		if (low == size) break;
	}
}

void select(double*a, int size) {
	int low = 0;
	int ind_min = 0;
	while (true) {
		double min = 1000;
		for (int i = low; i < size; i++) {
			if (a[i] < min) {
				min = a[i];
				ind_min = i;
			}
		}
		swap(a[low], a[ind_min]);
		low++;
		if (low == size) break;
	}
}

int main(int argc, char* argv[])
{
	int a[10] = { 3, 7, 23, 9, 2, 1, 8, 5, 9, 5 };
	double b[10] = { 8.5, 0.5, 1.24, 5.68, 7.66, 6.77, 9.11, 0.99, 10.1, 2 };

	select(a, 10);
	select(b, 10);

	for (int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << endl;
	for (int i = 0; i < 10; i++) cout << b[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}