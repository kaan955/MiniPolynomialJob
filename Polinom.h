#pragma once
#include <iostream>

using namespace std;

class Polinom {
	int* coefficient;
	int degree;
public:
	Polinom(int);
	void assignCoefficient();
	void print();
};

Polinom::Polinom(int my_degree)
{
	degree = my_degree;
}

void Polinom::assignCoefficient()
{
	int number = 0;
	int counter = 2; //2 loop

	coefficient = new int(degree+1);


	for (int k = 0; k <= degree; k++)
	{
		coefficient[k] = 0;
	}
	

	
	while (counter > 0)
	{
		cout << "Enter coefficients: " << endl;
		for (int i = degree; i >= 0; i--)
		{
			cout << "Coefficient " << i << ": ";
			cin >> number;
			coefficient[i] += number;

		}
		counter--;
	}

}
void Polinom::print()
{
	for (int e = degree; e >= 0; e--)
	{
		int xCounter = e;
		cout << coefficient[e];
		while (xCounter > 0)
		{
			cout << "*x";
			xCounter--;
			if (xCounter == 0)
			{
				cout << "+";
			}
		}

	}


}

