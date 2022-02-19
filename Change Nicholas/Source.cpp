/*
Name: Nicholas Sunmola
Date: April 4, 2017;
Sample Output: 58 cents requires 2 quarters, 1 nickel, 3 cents. 
*/
#include <iomanip>
#include <iostream>

using namespace std;

int Change, Quarter, ChangeRem, Dime, Nickel, Cent;
const int QuarterValue = 25, DimeValue = 10, NickelValue = 5;
char Choice;
int main()
{
	do
	{
		cout << "Enter your change: ";
		cin >> Change;

		if (Change >= QuarterValue) // Checks if the change entered is greater than or equal to the quarter value
		{
			Quarter = Change / QuarterValue;
			Change = Change - (Quarter * QuarterValue); // sets the new change

			cout << Quarter << " Quarter(s)" << endl;
		}

		if (Change >= DimeValue)// Checks if the new change is greater than or equal to the dime value
		{
			Dime = Change / DimeValue;
			Change = Change - (Dime * DimeValue);//Sets the new change

			cout << Dime << " Dime(s)" << endl;
		}

		if (Change >= NickelValue)// Checks if the new change is greater than or equal to the nickel value
		{
			Nickel = Change / NickelValue;
			Change = Change - (Nickel * NickelValue);//Sets the new change

			cout << Nickel << " Nickel(s)" << endl;
		}
		if (Change >= 1) // Checks if the new change is greater than or equal1 
		{
			Cent = Change; // prints out the remaining change
			cout << Cent << " Cent(s)" << endl;
		}
		cout << "Do you want to make another check? (y/n): ";
		cin >> Choice;
	} while (Choice == 'y');
	system("pause");
	return 0;
}