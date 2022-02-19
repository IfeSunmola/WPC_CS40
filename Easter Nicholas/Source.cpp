/*
Name: Nicholas Sunmola
Date: March 10, 2017
Description: Write a program that inputs the year and outputs the date (month and day) of Easter
Sunday for that year. Echo-print the input as part of the output.
Output: Easter Sunday
*/
#include <iostream>
#include <iomanip>
using namespace std;

int A, B, C, D, E, Year, EasterDate, AprilEaster, OverEasterDate, OverAprilEaster;
char Cont;

int main()
{
	do
	{
		cout << "Enter the year you wish to check: ";
		cin >> Year;

		A = Year % 19;
		B = Year % 4;
		C = Year % 7;
		D = (19 * A + 24) % 30;
		E = (2 * B + 4 * C + 6 * D + 5) % 7;
		EasterDate = 22 + D + E;

		/*
		The if statement below checks if the year entered is equal to 1954 or 1981 or 2049 or 2076.
		If the condition evaluates to true, the code block is executed. If it is false,
		the next line of code will be executed.
		*/
		if ((Year == 1954) || (Year == 1981) || (Year == 2049) || (Year == 2076)) // Main if
		{
			OverEasterDate = EasterDate - 7;
			/*
			Since the formula used above will output a result 7 days later, 7 is subtracted from
			the Date
			*/
			if (OverEasterDate <= 31)
				/*
				This if block checks if the Date is less than or equal to 31. If true, the block is executed
				else, the else if statement is executed */
			{
				cout << "You entered " << Year << " and Easter Sunday is on March " << OverEasterDate << endl;
			}
			else if (OverEasterDate > 31)
				/*
				This block checks if the date is greater than 31. If true, the code block is executed, else, the next line
				of code is executed
				*/
			{
				OverAprilEaster = OverEasterDate - 31;
				/*We are subtracting 31 because March has 31 days. The answer of the subtraction will be carried
				over as April*/
				cout << "You entered " << Year << " and Easter Sunday is on April " << OverAprilEaster << endl;
			}
		}



		else if ((Year != 1954) || (Year != 1981) || (Year != 2049) || (Year != 2076)) //main else if
		{
			if (EasterDate <= 31)
				/*
				This if block checks if the Date is less than or equal to 31. If true, the block is executed
				else, the else if statement is executed */
			{
				cout << "You entered " << Year << " and Easter Sunday is on March " << EasterDate << endl;
			}
			else if (EasterDate > 31)
				/*
				This block checks if the date is greater than 31. If true, the code block is executed, else, the next line
				of code is executed
				*/
			{
				AprilEaster = EasterDate - 31;
				/*We are subtracting 31 because March has 31 days. The answer of the subtraction will be carried
				over as April*/
				cout << "You entered " << Year << " and Easter Sunday is on April " << AprilEaster << endl;
			}
		}

		cout << "Do you want to make another check (y/n): ";
		cin >> Cont;
	} while (Cont == 'y');
	system("pause");
	return 0;
}