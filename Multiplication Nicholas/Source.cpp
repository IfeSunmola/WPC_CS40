/*
Name: Nicholas Sunmola
Date: April 24, 2017
Description:Write a program that prints a nicely labelled multiplication table.
The table should start at 0 and go to user defined digit.
(more than 17 doesn't fit on the screen so check that they don't go higher than that. 
If they do, use a while statement to allow them to input a valid number.)
Input: Length of multiplication Table
*/
#include <iomanip>
#include <iostream>

using namespace std;

int UserLength, i, Width, Sum;

int main()
{
	//system("MODE CON COLS=70 LINES=70");
	cout << "Enter the length of the multiplication table (<=17): ";
	cin >> UserLength;
	while (UserLength > 17) 
		/*If the user enters a number > 17 the code block will
		be executed*/
	{
		cout << "Enter a number less than or equal to 17." << endl;
		cout << "Enter the length of the multiplication table (<=17): ";
		cin >> UserLength;
	}
	for (i = 1; i <= UserLength; i++) // initialization; condition check; increment;
		/*The outer for loop controls the row while the inner for loop controls the 
		 columns. The outer loop will continue to run untill the inner loop is false*/
	{
		cout << setw(2);
		for (Width = 1; Width <= UserLength; Width++)
		{
			Sum = i * Width;
			cout << Sum << setw(4);
		}//inner for loop
		cout << endl;
	}//Outer for loop


	system("Pause");
	return 0;
}
