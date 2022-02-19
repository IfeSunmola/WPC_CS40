/*
Name: Nicholas Sunmola
Date: Feburary 23, 2017
Description: An assignment to make multiple calculations based on user input
*/
#include <iomanip> 
#include <iostream>

using namespace std;

double LengthYard;
double WidthYard;
double LengthHouse;
double WidthHouse;
const float AvgRate = 0.87;
double AreaYard;
double AreaHouse;
double AreaLawn;
double Time;
double AvgTime;

int main()
{
	cout << "Enter the length of the yard: ";
	cin >> LengthYard;

	cout << "\nEnter the width of the yard: ";
	cin >> WidthYard;

	cout << "\nEnter the Length of the house: ";
	cin >> LengthHouse;

	cout << "\nEnter the width of the house: ";
	cin >> WidthHouse;

	AreaYard = LengthYard * WidthYard;
	AreaHouse = LengthHouse * WidthHouse;
	AreaLawn = AreaYard - AreaHouse;
	Time = AreaLawn / AvgRate;

	cout << "\n\nThe area of the yard is " << setprecision(4) << AreaYard;
	cout << "\n\nThe area of the house is " << setprecision(4) << AreaHouse;
	cout << "\n\nThe area of the lawn is " << setprecision(4) << AreaLawn;
	cout << "\n\nTime taken to cut the grass at 0.87 square meters per second is "
    << setprecision(4) << Time;
	cout << "\n\nThe time in minutes is " << setprecision(4) << Time / 60 << "\n";
	system("pause");
	return 0;
}