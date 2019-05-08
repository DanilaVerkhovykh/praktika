
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

struct Book {
	int pages;
	string chapter;
	string author;
	string name_of_book;
	int edition;

	void booker() {
		cout << "Страниц: " << pages << endl;
		cout << "Глава: " << chapter << endl;
		cout << "Автор: " << author << endl;
		cout << "Название книги: " << name_of_book << endl;
		cout << "Издание: " << edition << endl;
	}
};


int main() {
	setlocale(LC_ALL, "RUS");
	Book my_book = { 420, "Вторая" , "Стивен Кинг", "Зелёная миля", 1996 };
	my_book.booker();
	system("pause");
	return 0;
}
