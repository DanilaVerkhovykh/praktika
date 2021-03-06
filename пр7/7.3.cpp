﻿#include "pch.h"
#include <iostream>
using namespace std;
class Transport {	// Базовый абстрактный класс "Транспорт"
protected:
	double maxVelocity;	// Максимальная скорость
public:
	Transport(double maxVelocity) { this->maxVelocity = maxVelocity; }
	double getMaxVelocity() { return maxVelocity; }
	virtual void showAdvantages() = 0;	// виртуальный метод, выводящий дос-тоинства транспорта
};
class Car : public Transport {	// Класс "Автомобиль"
public:
	Car(int maxVelocity) : Transport(maxVelocity) {};
	void showAdvantages();	// Определённый метод, выводящий достоинства авто-мобиля
};
class Bus : public Transport {	// Класс "Автобус"
public:
	Bus(int maxVelocity) : Transport(maxVelocity) {};
	void showAdvantages();	// Определённый метод, выводящий достоинства авто-буса
};
class Bicycle : public Transport {	// Класс "Велосипед"
public:
	Bicycle(int maxVelocity) : Transport(maxVelocity) {};
	void showAdvantages();	// Определённый метод, выводящий достоинства вело-сипеда
};
int main() {
	double a, b, c;
	cout << "Enter max speed of a car: ";
	cin >> a;
	cout << "Enter max speed of a bus: ";
	cin >> b;
	cout << "Enter max speed of a bicycle: ";
	cin >> c;
	Car car(a);
	Bus bus(b);
	Bicycle bicycle(c);
	car.showAdvantages();
	bus.showAdvantages();
	bicycle.showAdvantages();
	system("pause");
	return 0;
}
void Car::showAdvantages() {
	cout << "Car:" << endl;
	cout << "Can park in the yard" << endl;
	cout << "Max speed: " << maxVelocity << endl;
}
void Bus::showAdvantages() {
	cout << "Bus:" << endl;
	cout << "Has a big size" << endl;
	cout << "Max speed: " << maxVelocity << endl;
}
void Bicycle::showAdvantages() {
	cout << "Bicycle:" << endl;
	cout << "Can ride everywhere" << endl;
	cout << "Max speed: " << maxVelocity << endl;
}
