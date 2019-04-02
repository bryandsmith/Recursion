/*
	This program adds positive integers recursively
	Written by Bryan Smith 
*/
#include "pch.h"
#include <iostream>
using namespace std;
static int sumDigits(int &);
int main()
{
	int input;
	cout << "Enter a nonnegative integer: ";
	cin >> input;
	cout << "\n";
	int copy = input;
	if (input >= 0) {
		cout << "The sum of the digits of " << copy << " is " << sumDigits(input);
	}
	else {
		cout << "No negative numbers allowed! \n";
	}
	return 0;
}
//recursive function
static int sumDigits(int &input) {
	int output = input % 10;
	if (input > 0) {
			return output += sumDigits(input /= 10);
	}
	return input;
}