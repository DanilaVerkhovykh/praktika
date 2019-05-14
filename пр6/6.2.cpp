#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Expression {
public:
	virtual void display() = 0;
	virtual double result(double x) = 0;
	virtual void proizvodnaya() = 0;
	virtual Expression* copy() = 0;
};

class Constanta : public Expression {
public:
	void display() {
		cout << "f(x) = const" << endl;
	}
	double result(double x) {
		return 1;
	}
	void proizvodnaya() {
		cout << "f'(x) = 0" << endl;
	}
	Expression* copy() {
		Expression* expr = new Constanta;
		return expr;
	}
};

class Var : public Expression {
public:
	void display() {
		cout << "f(x) = x" << endl;
	}
	double result(double x) {
		return x;
	}
	void proizvodnaya() {
		cout << "f'(x) = 1" << endl;
	}
	Expression* copy() {
		Expression* expr = new Var;
		return expr;
	}
};

class Summ : public Expression {
public:
	void display() {
		cout << "f(x) = x+x" << endl;
	}
	double result(double x) {
		return x + x;
	}
	void proizvodnaya() {
		cout << "f'(x) = 2" << endl;
	}
	Expression* copy() {
		Expression* expr = new Summ;
		return expr;
	}
};

class Diff : public Expression {
public:
	void display() {
		cout << "f(x) = x-(-x)-(-x)" << endl;
	}
	double result(double x) {
		return x - (-x) - (-x);
	}
	void proizvodnaya() {
		cout << "f'(x) = 3" << endl;
	}
	Expression* copy() {
		Expression* expr = new Diff;
		return expr;
	}
};

class Multi : public Expression {
public:
	void display() {
		cout << "f(x) = x*(5*x-1)" << endl;
	}
	double result(double x) {
		return x * (5 * x - 1);
	}
	void proizvodnaya() {
		cout << "f'(x) = (5*x-1)+5*x" << endl;
	}
	Expression* copy() {
		Expression* expr = new Multi;
		return expr;
	}
};

class Division : public Expression {
public:
	void display() {
		cout << "f(x) = (48*x^3)/(1 - x*x)" << endl;
	}
	double result(double x) {
		return (48 * x * x * x) / (1 - x * x);
	}
	void proizvodnaya() {
		cout << "f'(x) = (96*x^4 + 144*x^2(1-x^2)/(1-x^2)^2" << endl;
	}
	Expression* copy() {
		Expression* expr = new Division;
		return expr;
	}
};

class Sin : public Expression {
public:
	void display() {
		cout << "f(x) = sin(x)" << endl;
	}
	double result(double x) {
		return sin(x);
	}
	void proizvodnaya() {
		cout << "f'(x) = cos(x)" << endl;
	}
	Expression* copy() {
		Expression* expr = new Sin;
		return expr;
	}
};

class Cos : public Expression {
public:
	void display() {
		cout << "f(x) = cos(x)" << endl;
	}
	double result(double x) {
		return cos(x);
	}
	void proizvodnaya() {
		cout << "f'(x) = -sin(x)" << endl;
	}
	Expression* copy() {
		Expression* expr = new Cos;
		return expr;
	}
};

class Exp : public Expression {
public:
	void display() {
		cout << "f(x) = exp(x)" << endl;
	}
	double result(double x) {
		return exp(x);
	}
	void proizvodnaya() {
		cout << "f'(x) = exp(x)" << endl;
	}
	Expression* copy() {
		Expression* expr = new Exp;
		return expr;
	}
};
class Ln : public Expression {
public:
	void display() {
		cout << "f(x) = ln(x)" << endl;
	}
	double result(double x) {
		return log(x);
	}
	void proizvodnaya() {
		cout << "f'(x) = 1/x" << endl;
	}
	Expression* copy() {
		Expression* expr = new Ln;
		return expr;
	}
};