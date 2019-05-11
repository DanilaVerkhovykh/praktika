#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int *change(int *a) {
	for (int i = 0; i < 11; i = i + 2) {
		int p = a[i];
		a[i] = a[i + 1];
		a[i + 1] = p;
	}
	return a;
}

void vyvod(int *a) {
	for (int i = 0; i < 12; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main()
{
	srand(time(0));
	int *a = new int[12];
	for (int i = 0; i <= 11; i++) {
		a[i] = rand() % 10 + 1;
	}
	vyvod(a);
	a = change(a);
	vyvod(a);
}
