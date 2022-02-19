/*
Name: Nicholas Sunmola
Description: Write a program that determines the day number (1 to 366) in
a year for a date that is provided as input data. As an example, January 1, 1997, 
is day 1; December 31, 1995 is day 365; December 31, 1996 is day 366 since 1996 is a leap year.
Date: March 15, 2017
*/
#include <iostream>
#include <iomanip>
using namespace std;

int Date, Month, Year, TotalDays;
//Declares the amount of days in each month
const int JanDays = 31, MarchDays = 31, MayDays = 31, JulyDays = 31, AugDays = 31, OctDays = 31, DecDays = 31;
const int FebDays = 28, FebDaysLeap = 29;
const int AprilDays = 30, JuneDays = 30, SeptDays = 30, NovDays = 30;
char Cont;
int main()
{
	do
	{
		cout << "Enter the day you want to check: " << endl;
		cin >> Date;
		cout << "Enter the month you want to check (e.g enter 1 for january): ";
		cin >> Month;
		cout << "Enter the year you want to check: " << endl;
		cin >> Year;
		if ((Date == 29) || (Date == 30) || (Date == 31))
		{
			if (Month == 1)//January
			{
				TotalDays = Date;
				cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
			}
			else if (Month == 2)//Febuary
			{
				if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))//Checks if the year entered is a leap year
				{
					cout << "The year you entered is a leap year" << endl;
					TotalDays = JanDays + Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
				else //If the year is not a leap year this code block will be executed
				{
					cout << "The year you entered is not a leap year" << endl;
					TotalDays = JanDays + Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
			}
			else if (Month == 3) //March
			{
				if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
				{
					TotalDays = JanDays + FebDaysLeap + Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
				else
				{
					TotalDays = JanDays + FebDays + Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
			}
			else if (Month == 4)//April
			{
				if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
				{
					TotalDays = JanDays + FebDaysLeap + MarchDays + Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
				else
				{
					TotalDays = JanDays + FebDays + MarchDays + Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
			}
			else if (Month == 5)//May
			{
				if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
				{
					TotalDays = JanDays + FebDaysLeap + MarchDays + AprilDays + Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
				else
				{
					TotalDays = JanDays + FebDays + MarchDays + AprilDays + Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
			}
			else if (Month == 6)//June
			{
				if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
				{
					TotalDays = JanDays + FebDaysLeap + MarchDays + AprilDays + MayDays + Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
				else
				{
					TotalDays = JanDays + FebDays + MarchDays + AprilDays + MayDays + Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
			}
			else if (Month == 7) //July
			{
				if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
				{
					TotalDays = JanDays + FebDaysLeap + MarchDays + AprilDays + MayDays + JuneDays + Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
				else
				{
					TotalDays = JanDays + FebDays + MarchDays + AprilDays + MayDays + JuneDays + Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
			}
			else if (Month == 8) //August
			{
				if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
				{
					TotalDays = JanDays + FebDaysLeap + MarchDays + AprilDays + MayDays + JuneDays + JulyDays + Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
				else
				{
					TotalDays = JanDays + FebDays + MarchDays + AprilDays + MayDays + JuneDays + JulyDays + Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
			}
			else if (Month == 9) //September
			{
				if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
				{
					TotalDays = JanDays + FebDaysLeap + MarchDays + AprilDays + MayDays + JuneDays + JulyDays + AugDays
						+ Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
				else
				{
					TotalDays = JanDays + FebDays + MarchDays + AprilDays + MayDays + JuneDays + JulyDays + AugDays
						+ Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
			}
			else if (Month == 10) //October
			{
				if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
				{
					TotalDays = JanDays + FebDaysLeap + MarchDays + AprilDays + MayDays + JuneDays + JulyDays + AugDays
						+ SeptDays + Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
				else
				{
					TotalDays = JanDays + FebDays + MarchDays + AprilDays + MayDays + JuneDays + JulyDays + AugDays
						+ SeptDays + Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
			}
			else if (Month == 11) //November
			{

				if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
				{
					TotalDays = JanDays + FebDaysLeap + MarchDays + AprilDays + MayDays + JuneDays + JulyDays + AugDays
						+ SeptDays + OctDays + Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
				else
				{
					TotalDays = JanDays + FebDays + MarchDays + AprilDays + MayDays + JuneDays + JulyDays + AugDays
						+ SeptDays + OctDays + Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
			}
			else if (Month == 12) //December
			{
				if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
				{
					TotalDays = JanDays + FebDaysLeap + MarchDays + AprilDays + MayDays + JuneDays + JulyDays + AugDays
						+ SeptDays + OctDays + NovDays + Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
				else
				{
					TotalDays = JanDays + FebDays + MarchDays + AprilDays + MayDays + JuneDays + JulyDays + AugDays
						+ SeptDays + OctDays + NovDays + Date;
					cout << Date << "/" << Month << "/" << Year << " is day " << TotalDays << " in " << Year << endl;
				}
			}
			else
			{
				cout << "Please enter a valid month!!!" << endl;
			}
		}
		else
		{
			cout << "Enter a valid date!!!" << endl;
		}
		cout << "Do you want to make another check (y/n): " << endl;
		cin >> Cont;
	} while (Cont == 'y');
	system("pause");
	return 0;
}
