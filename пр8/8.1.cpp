#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream fin("a.txt");	// Открытие файла на считывание данных из него
	while (!fin.eof()) {
		string s;
		fin >> s;	// Считывание данных из файла
		cout << s << endl;
	}
	fin.close();	// Закрытие файла
	system("pause");
	return 0;
}
