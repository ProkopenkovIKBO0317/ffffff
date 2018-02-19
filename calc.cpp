#include "stdafx.h"
#include "calc.h"
#include <iostream>
using namespace std;

void menu(int select)
{
	cout << "Select an operation: " << endl;
	cout << "----------------------" << endl;
	cout << "1. Sum" << endl;
	cout << "2. Substraction" << endl;
	cout << "3. Division " << endl;
	cout << "4. Multiplication" << endl;
	cout << "----------------------" << endl;
}

void newline()
{
	cout << endl;
}

void result(double r)
{
	cout << r;
}

double sum(double a, double b)
{
	return a + b;
}

double multiplication(double a, double b)
{
	return a * b;
}

double substraction(double a, double b)
{
	return a - b;
}

double division(double a, double b)
{
	if (b != 0)
	{
		return a / b;
	}
}
