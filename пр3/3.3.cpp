#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

struct avto {
	string marka;
	string model;
	int losh_sil;
	int kolichestvo_dverey;
	string privod;

	void casco() {
		cout << "Марка: " << marka << endl;
		cout << "Модель: " << model << endl;
		cout << "ЛС: " << losh_sil << endl;
		cout << "Кол-во дверей: " << kolichestvo_dverey << endl;
		cout << "Вид привода: " << privod << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "RUS");
	avto moe = { "Феррари", "488", 670, 2, "Задний" };
	moe.casco();
	system("pause");
	return 0;
}
