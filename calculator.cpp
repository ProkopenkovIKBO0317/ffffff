#include "stdafx.h"
#include "calc.h"
#include <iostream>

using namespace std;

int main()
{
	double a, b, c = 1;
	int select = 0;
	cout << "Enter 2 variables" << endl;
	cin >> a >> b;

	menu(select);
	cin >> select;

	switch (select) {
	case 1:
		c = sum(a, b);
		result(c);
		newline();
		break;

	case 2:
		c = substraction(a, b);
		result(c);
		newline();
		break;

	case 3:
		c = division(a, b);
		result(c);
		newline();
		break;

	case 4:
		c = multiplication(a, b);
		result(c);
		newline();
		break;

	default:
		cout << "Error, restart the program" << endl;
		break;
	}

	system("pause");
}
