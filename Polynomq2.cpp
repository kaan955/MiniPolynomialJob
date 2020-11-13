#include <iostream>
#include "Polinom.h"

using namespace std;

int main()
{
	int degree = 0;
	cout << "Enter degree of the polynomial: ";
	cin >> degree;

	Polinom polinom(degree);
	polinom.assignCoefficient();
	polinom.print();



	return 0;
}