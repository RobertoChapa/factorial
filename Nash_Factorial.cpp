/***************
Chapa
2/15/2019
Factorial 
****************/

#include "pch.h"
#include <iostream>

using namespace std;

long long factorial(long long f);
long long validator(long long n);

int main()
{
	bool t = true;
	int n = 0;

	cout << "Choose a number from 1 to 20 and we'll find it's factorial: " << endl;

	while (t == true)
	{	
		cin >> n;

		bool v = validator(n);

		switch (v)
		{
			case false:
				cout << "Your entry is not a number from 1 to 20. Please try again." << endl;
				break;
			case true:
				if (n == 0)
				{
					t = false; //Get out of loop
				}
				else
				{
					cout << "The factorial of " << n << " is: " << factorial(n) << endl;
					t = true;
				}
				break;
		}
	}

	return 0;
}

long long factorial(long long u)
{

	long long f = 1;

	for (long long i = 1; i <= u; i++)
	{
		f *= i;
	}

	return f;
}

long long validator(long long n)
{
	bool t = false;
	
	if (n > 0 && n <= 20) 
	{
		t = true;
	}
	else
	{
		t = false;
	}

	return t;
}

