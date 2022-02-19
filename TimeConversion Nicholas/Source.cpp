/*
Name: Nicholas Sunmola
Date: Febuary 27, 2017
Description: Write a program that inputs a number of seconds up 
to 4,294,967,295 and output the number of years, weeks, 
days, hours, minutes, and seconds it is equal to. 
*/
#include <iomanip>
#include <iostream>
using namespace std;

unsigned Seconds;
int Year, Weeks, Days, Hours, Minutes, Sec = 0;
int RemainderYear, RemainderWeek, RemainderDay, RemainderHour,
RemainderMinute, RemainderSecond = 0;
const int SecInMin = 60;
const int SecInHour = 3600;
const int SecInDay = 86400;
const int SecInWeek = 604800;
const int SecInYear = 31556900;

int main()
{
	cout << "Enter the amount of seconds: ";
	cin >> Seconds;

	//The "%" operator outputs only the remainder of two digits

	Year = Seconds / SecInYear;//This line converts the seconds to years
	RemainderYear = Seconds % SecInYear;//calculates the remainder of the Year 
	
	Weeks = RemainderYear / SecInWeek;//This line calculates uses the RemainderYear to calculate the weeks
	RemainderWeek = RemainderYear % SecInWeek;//calculates the Remaninder of the Weeks 

	Days = RemainderWeek / SecInDay;//This line uses the RemainderWeek to calculate the days
	RemainderDay = RemainderWeek % SecInDay;//calculates the remainder of the Days

	Hours = RemainderDay / SecInHour;//This line uses the remainderDay to calculate the Hours
	RemainderHour = RemainderDay % SecInHour;//Calculates the Remainder of the Hours

	Minutes = RemainderHour / SecInMin;//This line uses the remainder hour to calculate the Minutes
	Sec = RemainderHour % SecInMin;//This line uses the remainder of the Minutes as seconds
	
	cout << Year << " year(s)\n\n";
	cout << Weeks << " Week(s)\n\n";
	cout << Days << " Day(s)\n\n";
	cout << Hours << " Hour(s)\n\n";
	cout << Minutes << " Minute(s)\n\n";
	cout << Sec << " Seconds(s)\n\n";

	system("pause");
	return 0;
}//End Main