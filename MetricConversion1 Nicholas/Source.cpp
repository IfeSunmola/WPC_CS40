/*
Name: Nicholas Sunmola
Assignment: Write a program to convert from square meters to square yards and 
vice-versa
Date: Febuary 22, 2017
*/
#include <iomanip>
#include <iostream>
using namespace std;

//Double holds large numbers up to 15 digits precision

double squareM = 0;
const double ConverConst = 1.196; //This value cannot be changed
double square_yards;
double square_meters;

int main()
{
	

	cout << "Enter any number: ";
	cin >> squareM; //Requesting for user input
	
	square_yards = squareM * ConverConst; //Converts user input to square yards
	
	cout << squareM << " square meters is equal to " << square_yards << " square yards\n\n";
	
	square_meters = square_yards / ConverConst; //Converts back to the user input
	cout << square_yards << " square yards is equal to " << square_meters << " square meters\n\n";
	
	
	system("pause");
	return 0;
}