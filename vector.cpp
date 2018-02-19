#include "stdafx.h"
#include "vector.h"
#include <iostream>

using namespace std;

void menu(int select)
{
	cout << "Select an operation" << endl;
	cout << endl;
	cout << "1. Sum" << endl;
	cout << "2. Substraction" << endl;
	cout << "3. Multiplication vector & vector" << endl;
	cout << "4. Length of vector" << endl;
	cout << "5. Multiplication vector & number" << endl;
	cout << endl;
}

void toString(double r1, double r2)
{
	cout << "Your vector is (" << r1 << ';' << r2 << ')' << endl;
}

double sum(double a, double b)
{
	return a + b;
}

double substraction(double a, double b)
{
	return a - b;
}

double multiply(double n, double c)
{
	return n * c;
}