#include "pch.h"
#include <iostream>

using namespace std;

class Property {
protected:
	int cost;
public:
	virtual float tax() = 0;
};

class Flat : public Property {
public:
	Flat(double a) {
		cost = a;
	}
	float tax() {
		return cost / 1000;
	}
};

class Car : public Property {
public:
	Car(double a) {
		cost = a;
	}
	float tax() {
		return cost / 200;
	}
};

class Country_house : public Property {
public:
	Country_house(double a) {
		cost = a;
	}
	float tax() {
		return cost / 500;
	}
};

int main()
{
	Property **a = new Property*[7];
	a[0] = new Flat(70000000);
	a[1] = new Flat(6000000);
	a[2] = new Flat(500000);
	a[3] = new Car(2000000);
	a[4] = new Car(200000);
	a[5] = new Country_house(200000000);
	a[6] = new Country_house(20000000);
	for (int i = 0; i < 7; i++) {
		cout << a[i]->tax() << endl;
	}
	for (int i = 0; i < 7; i++) {
		delete a[i];
	}
	delete[] a;
}