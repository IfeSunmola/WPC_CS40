#include <iomanip>
#include <iostream>

using namespace std;

int Year1, Year2, i, TotalDays,  DiffYear;
const int JanDays = 31, MarchDays = 31, MayDays = 31, JulyDays = 31,
AugDays = 31, OctDays = 31, DecDays = 31;
const int FebDays = 28, FebDaysLeap = 29, YearSum = 365, LeapYearSum = 366;
const int AprilDays = 30, JuneDays = 30, SeptDays = 30, NovDays = 30;
char cont;
int main()
{
	do
	{
		cout << "First Year: ";
		cin >> Year1;

		cout << "Second Year: ";
		cin >> Year2;

		DiffYear = Year2 - Year1;

		if (((Year1 || Year2) % 4 == 0 && (Year1 || Year2) % 100 != 0) || (Year1 || Year2) % 400 == 0)
		{
			if (DiffYear != 0)
			{
				if (DiffYear > 0)
				{
					TotalDays = LeapYearSum * DiffYear;
					cout << "There are " << TotalDays << " Days" << endl;
				}
				else
				{
					TotalDays = LeapYearSum * DiffYear * -1;
					cout << "There are " << TotalDays << " Days" << endl;
				}
			}
		}
		else
		{
			if (DiffYear != 0)
			{
				if (DiffYear > 0)
				{
					TotalDays = YearSum * DiffYear;
					cout << "There are " << TotalDays << " Days" << endl;
				}
				else
				{
					TotalDays = YearSum * DiffYear * -1;
					cout << "There are " << TotalDays << " Days" << endl;
				}
			}
		}

		

		
		
		cout << "Do you want to continue" << endl;
		cin >> cont;
	} while (cont == 'y');
	system("pause");
	return 0;
}