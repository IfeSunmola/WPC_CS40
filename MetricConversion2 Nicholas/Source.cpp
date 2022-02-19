/*
Name: Nicholas Sunmola
Date: February 23, 2017
Description: A program to convert from degree celcius to degree fahrenheit
and convert from degree fahrenheit back to degree celcius.
*/

#include <iomanip>
#include <iostream>
using namespace std;

double UserInput;
double celcius;
double fahren;

int main()
{
	cout << "Enter the number you want to convert: ";
	cin >> UserInput;

	celcius = (UserInput*(9.0 / 5.0)) + 32.0;

	//setprecision(), sets the amount of digits to be shown
	cout << UserInput << " degree celcius is equal to " <<
	setprecision(5) << celcius <<" degree Fahrenheit\n\n";

	fahren = (5.0 / 9.0)*(celcius - 32.0);

	cout << celcius << " degree Fahrenheit is equal to "<<
	setprecision(5) << fahren << " degree celcius\n";

	system("pause");
	return 0;
}