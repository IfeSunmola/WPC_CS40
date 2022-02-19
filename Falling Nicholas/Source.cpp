/*
Name:Nicholas Sunmola
Description:This program should Read in the height
of a tower and calculate how long it would take for
an object to hit the ground.
Date: April 6th, 2017
Output: Time and height
*/
#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

double TowerHeight, TimeInterval, Height, Time;
const double Gravity = 9.80665;

int main()
{
	cout << "Enter the height of the tower: " << endl;
	cin >> TowerHeight;
	cout << "Enter the time interval: " << endl;
	cin >> TimeInterval;
	cout << endl;

	Time = 0;//Initializtion
	Height = TowerHeight;//Initialization
	while (Height >= 0)
	{
		cout << setprecision(2) << fixed << Time
			<< setw(13)
			<< setprecision(2) << fixed << Height << endl;
		Time += TimeInterval;
		Height = TowerHeight - 0.5 * Gravity * pow(Time, 2);

	}
	cout << Time << setw(15) << "SPLAT!!!" << endl;
	system("pause");
	return 0;
}