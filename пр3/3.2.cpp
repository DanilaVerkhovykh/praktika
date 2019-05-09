// ConsoleApplication48.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

struct Gruppa {
	int kolichestvo;
	string starosta;
	int kolichestvo_otl;
	int kolichestvo_hor;
	int kolichestvo_ud;
	int sdali;
	int ne_sdali;

	void gruuppa() {
		cout << "Кол-во человек в группе: " << kolichestvo << endl;
		cout << "Староста: " << starosta << endl;
		cout << "Кол-во отличников: " << kolichestvo_otl << endl;
		cout << "Кол-во хорошистов: " << kolichestvo_hor << endl;
		cout << "Кол-во обычных: " << kolichestvo_ud << endl;
		cout << "Сдали экзамены: " << sdali << endl;
		cout << "Не сдали экзамены: " << ne_sdali << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "RUS");
	Gruppa imbo0218 = { 29, "Вася Пупкин", 3, 4, 23, 25, 4 };
	imbo0218.gruuppa();
	system("pause");
	return 0;
}
