#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int summ(int a, int b) {
	return a + b;
}

double summ(double a, double b) {
	return a + b;
}

string summ(string a, string b) {
	return a + b;
}

string summ(char a, char b) {
	string s;
	s.push_back(a);
	s.push_back(b);
	return s;
}

int diff(int a, int b) {
	return a - b;
}

double diff(double a, double b) {
	return a - b;
}

string diff(string s1, string s2)
{
	int pos1 = s1.find(s2); //в с1 ищет подстроку с2
	string res = s1.substr(0, pos1 - 1) + s1.substr(pos1 + s2.size(), string::npos); //возвращает подстроку [pos, pos+count) "вырезает"
	return res;																		//npos - до конца строки
}															//иными словами, выделяем всё, кроме вычитаемого и выводим

int multy(int a, int b) {
	return a * b;
}

double multy(double a, double b) {
	return a * b;
}

string multy(string a, int b) {
	string s;
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a.size(); j++) {
			s.push_back(a[j]);
		}
	}
	return s;
}

string multy(char a, int b) {
	return string(b, a);
}

int divis(int a, int b) {
	if (b == 0) {
		cout << "На ноль делить нельзя";
	}
	else {
		return a / b;
	}
}

double divis(double a, double b) {
	if (b == 0) {
		cout << "На ноль делить нельзя";
	}
	else {
		return a / b;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int int_a = 35;
	int int_b = 7;

	double dou_a = 2.6;
	double dou_b = -1.3;

	string str_a = "I hate love Pascal ";
	string str_b = "hate";

	char ch_a = '*';
	char ch_b = '&';

	cout << "Для чисел " << int_a << " и " << int_b << " int: " << endl;
	cout << "Сложение = " << summ(int_a, int_b) << endl;
	cout << "Вычитание = " << diff(int_a, int_b) << endl;
	cout << "Умножение = " << multy(int_a, int_b) << endl;
	cout << "Деление = " << divis(int_a, int_b) << endl << endl;

	cout << "Для чисел " << dou_a << " и " << dou_b << " double: " << endl;
	cout << "Сложение = " << summ(dou_a, dou_b) << endl;
	cout << "Вычитание = " << diff(dou_a, dou_b) << endl;
	cout << "Умножение = " << multy(dou_a, dou_b) << endl;
	cout << "Деление = " << divis(dou_a, dou_b) << endl << endl;

	cout << "Для строк " << str_a << " и " << str_b << " string: " << endl;
	cout << "Сложение = " << summ(str_a, str_b) << endl;
	cout << "Вычитание = " << diff(str_a, str_b) << endl;
	string ss = diff(str_a, str_b);
	cout << "Умножение " << ss << " на " << int_a << " = " << multy(ss, int_a) << endl << endl;

	cout << "Для символов " << ch_a << " и " << ch_b << " char: " << endl;
	cout << "Сложение = " << summ(ch_a, ch_b) << endl;
	cout << "Умножение " << ch_a << " на " << int_b << " = " << multy(ch_a, int_b) << endl << endl;

	system("pause");
	return 0;
}