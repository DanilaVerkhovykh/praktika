
#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int **zapolnenie(int **a, int m, int n) {
	for (int i = 0; i < m; i++) {
		a[i] = new int[n];
		for (int k = 0; k < n; k++) {
			a[i][k] = rand() % 41 + 10;
		}
	}
	return a;
}

void vyvod(int **a, int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int k = 0; k < n; k++) {
			cout << a[i][k] << " ";
		}
		cout << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(0));
	int m, n;
	cin >> m >> n;
	int **a = new int*[m];
	a = zapolnenie(a, m, n);
	vyvod(a, m, n);
	for (int i = 0; i < m; i++) {
		delete[] a[i];
		a[i] = NULL;
	}
	delete[] a;
	a = NULL;
}