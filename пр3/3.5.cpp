#include "pch.h"
#include <iostream>
#include <string>
#include "ConsoleApplication46.cpp"

using namespace std;

struct biblioteca {
	string gorod;
	int god;
	string imya;
	Book books[100];
};

int main()
{
	setlocale(LC_ALL, "RUS");
	biblioteca bibl = { "Таганрог", 1905, "Нина",{ { 420, "Вторая" , "Стивен Кинг", "Зелёная миля", 1996 }, {2147483647, "Вторая", "Павел Конаков", "Помощь без автомата", 2019}, { 2147483646, "2", "Марина Казарян", "Главное, чтоб не точь-в-точь!", 2018 }
	} };
	system("pause");
	return 0;
}