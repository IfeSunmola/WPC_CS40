/*
Name: Nicholas Sunmola
Description: A certain towns population is 9965 people.
Its population is projected to increase by 6.5% each year.
Write a loop that determines how many years it would take for the population to exceed 30,000.
Date: April 4th, 2017
*/
#include <iomanip>
#include <iostream>

using namespace std;

int Population = 9965, YearCount;
double PopIncrease = 1.065, NewPop;

int main()
{
	
	YearCount = 0;//Initialization
	while (Population <= 30000) 
	{
		Population *= PopIncrease;
		YearCount++; //Counts the amount of times this code block is executed
	}
	cout << YearCount << " year(s)" << endl;

	system("pause");
	return 0;
}