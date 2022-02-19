/*
Name: Nicholas Sunmola
Date: Febuary 24th, 2017
Description: Write a program that accepts the number of strides during the
first minute and last minute of jogging, and the total time the jogger 
spends jogging in hours and minutes.Then finds the averages and outputs
the distance the jogger has jogged in miles. Assume the jogger's stride 
to be 2.5 feet.
*/
#include <iomanip>
#include <iostream>
using namespace std;

int FirstStride;
int SecondStride;
float Hour;
float Minutes;
float HourMin;
double AvgStride;
double TotalStrides;
double TotalDis;
double Dis_in_miles;

void main()
{
	cout << "Enter the number of strides in the first minute: ";
	cin >> FirstStride;

	cout << "\n\nEnter the number of strides in the second minute: ";
	cin >> SecondStride;

	cout << "\n\nEnter the number of hour(s) spent: ";
	cin >> Hour;

	cout << "\n\nEnter the number of minute(s) spent: ";
	cin >> Minutes;

	HourMin = Hour + (Minutes / 60);
	AvgStride = (FirstStride + SecondStride) / 2;
	TotalStrides = AvgStride * HourMin * 60;
	TotalDis = TotalStrides * 2.5;
	Dis_in_miles = TotalDis / 5280;
	
	cout << "\n\nYour average number of strides is: " << setprecision(7) << AvgStride;
	cout << "\n\nYour total number of stride is " << setprecision(7) << TotalStrides;
	cout << "\n\nYour total distance is " << setprecision(7) << TotalDis << " feet";
	cout << "\n\nTotal Distance in miles is " << setprecision(7) << Dis_in_miles << " miles\n";

	system("pause");
}//End Main