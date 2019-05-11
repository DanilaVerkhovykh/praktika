#include "pch.h"
#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

double *memory(int *size) {
	cout << "Размер массива: ";
	cin >> *size;
	double *a = new double[*size];
	system("CLS");
	cout << "Массив размера " << *size << " был создан" << endl << endl;
	return a;
}

double * fill(double *a, int size, bool zapolnenie) {
	if (zapolnenie) {
		for (int i = 0; i < size; i++) {
			cout << "a[" << i << "]=";
			cin >> a[i];
		}
		system("CLS");
		cout << "Вы заполнили массив вручную." << endl << endl;
	}
	else {
		for (int i = 0; i < size; i++) {
			a[i] = double(rand() % 127) / 1.9;
		}
		system("CLS");
		cout << "Массив был заполнен автоматически." << endl << endl;
	}
	return a;
}

void vyvod(double *a, int size) {
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void udalenie(double *a, int *size) {
	if (*size == 0) {
		cout << "Удаление невозможно. Создайте массив." << endl << endl;
	}
	else {
		delete[] a;
		a = NULL;
		*size = 0;
		cout << "Массив был успешно удалён." << endl << endl;
	}
}

void menu() {
	cout << "Введите: " << endl;
	cout << "	1, чтобы создать массив;" << endl;
	cout << "	2, чтобы заполнить массив;" << endl;
	cout << "	3, чтобы вывести массив на экран;" << endl;
	cout << "	4, чтобы удалить массив;" << endl;
	cout << "	5, чтобы выйти из программы;" << endl;
	cout << "Ваш ответ: ";
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	cout << "Приветствую! Следуйте инструкциям для работы с массивом." << endl << endl;
	int size = 0;
	double *a = 0;
	bool cycle_exit = false;  // переменная для выхода из вечного цикла
	bool empty = true; //переменная нужна для отслеживания, заполнен ли созданный массив значениями
	bool zapolnenie = false;

	while (true) {
		menu();
		int answer;
		cin >> answer;
		switch (answer) {
		case 1:
			system("CLS");
			if (size != 0) {
				cout << "Сначала удалите старый массив." << endl << endl;
			}
			else a = memory(&size);
			break;
		case 2:
			system("CLS");
			if (size == 0) {
				cout << "Массив ещё не был создан." << endl << endl;
				break;
			}
			else {
				cout << "Заполнить массив вручную или автоматически? (1/0)" << endl;
				cin >> zapolnenie;
				a = fill(a, size, zapolnenie);
			}
			empty = false;
			break;
		case 3:
			system("CLS");
			if (size == 0) {
				cout << "Ошибка! Вы ещё не создали массив!" << endl << endl;
				break;
			}
			else if (empty) {
				cout << "Данные отсутствуют. Массив пуст." << endl << endl;
			}
			else vyvod(a, size);
			break;
		case 4:
			system("CLS");
			delete(a, &size);
			break;
		case 5:
			system("CLS");
			cout << "Спасибо, что воспользовались нашей программой." << endl;
			Sleep(2000);
			cycle_exit = true;
			break;
		}
		if (cycle_exit == 1) break;
	}
	return 0;
}