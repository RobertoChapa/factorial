// Nash_Factorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

//global variables
int n = 0; //user-generated number
int f = 0; //factorial

int factorial();
int validator();

int main()
{
	cout << "Choose a number from 1 to 20 and we'll find it's factorial: " << endl;
	cin >> n;

	int validator();
}

int factorial()
{
	for (int i = 1; i < n; i++)
	{
		f = f * i;
	}

	return f;
}

int validator()
{
	if (n > 0 && n <= 20) {
		f = n;

		factorial();
		
		cout << "The factorial of " << n << " is: " << f << endl;
	}
	else
	{
		cout << "Your entry is not a number from 1 to 20. Please try again." << endl;
	}
	return 0;
}