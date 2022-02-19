/*
Name: Nicholas Sunmola
Date: April 27, 2017
Description: Write a program that given an input value N,
displays N rows of the form 1 2 ... N, 2 3 ... N+1, and
so on - a barber pole pattern of numbers
Output: Barber pole
*/
#include <iomanip>
#include <iostream>

using namespace std;

int UserInput, i, Width, Width1;
char Cont;
int main()
{
	do
	{
		cout << "Enter the amount of rows: ";
		cin >> UserInput;
		
		Width1 = UserInput;

		for (i = 0; i <= UserInput; i++) 
		// initialization;CondiitonCheck;Increment. Controls the row. Will continue to execute untill
		//the inner loop is false
		{
			for (Width = i; Width <= Width1; Width++) 
			//initialization;CondiitonCheck;Increment. Controls the column
			{
				cout << setw(3) << Width; // Prints out the value of width at each execution	
			}
			cout << endl; //new line everytime the code block is executed
			Width1++; // Increases the value of width1 at each code execution
		}//Outer for loop
		
		cout << endl;
		cout << "Restart?(y/n)";
		cin >> Cont;
	} while (Cont == 'y');
	system("pause");
	return 0;
}