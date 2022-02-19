/*
Name: Nicholas Sunmola
Date: March 9, 2017
Description: The numbers on a telephone keypad have corresponding letters. Write a program 
that accepts a letter as input and outputs the corresponding number 
that is on a telephone keypad.
*/
#include <iostream>
#include <iomanip>

using namespace std;

char Letter, choice;
int main()
{
	do
	{
	cout << "Enter any letter: ";
	cin >> Letter;
	cout << endl;
	
	/*
	The switch statement is a more efficient way of checking for conditions. 
	The format is 
	switch (variable you want to test){
	case conditon1: code
	break;
	case condition2: code
	.
	.
	.
	default: Enter a vald input
	}
	The break statement prevents the program from checking the other lines of code
	after the condtion has been evaluated to true. The default statement will only be executed if
	none of the condition evaluates to true.
	*/
		switch (Letter)
		{
		case 'A':
		case 'B':
		case 'C':
		case 'a':
		case 'b':
		case 'c': cout << "You entered " << Letter << " and your number is 2" << endl << endl;
			break;

		case 'D':
		case 'E':
		case 'F':
		case 'd':
		case 'e':
		case 'f': cout << "You entered " << Letter << " and your number is 3" << endl << endl;
			break;

		case 'G':
		case 'H':
		case 'I':
		case 'g':
		case 'h':
		case 'i': cout << "You entered " << Letter << " and your number is 4" << endl << endl;
			break;

		case 'J':
		case 'K':
		case 'L':
		case 'j':
		case 'k':
		case 'l': cout << "You entered " << Letter << " and your number is 5" << endl << endl;
			break;

		case 'M':
		case 'N':
		case 'O':
		case 'm':
		case 'n':
		case 'o': cout << "You entered " << Letter << " and your number is 6" << endl << endl;
			break;

		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case 'p':
		case 'q':
		case 'r':
		case 's': cout << "You entered " << Letter << " and your number is 7" << endl << endl;
			break;

		case 'T':
		case 'U':
		case 'V':
		case 't':
		case 'u':
		case 'v': cout << "You entered " << Letter << " and your number is 8" << endl << endl;
			break;

		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
		case 'w':
		case 'x':
		case 'y':
		case 'z': cout << "You entered " << Letter << " and your number is 9" << endl << endl;
			break;
		default: cout << "Enter an alphabet" << endl << endl;

		} 
		cout << "Do you want to make another check (y/n): ";
		cin >> choice;
		cout << endl << endl;


	} while (choice == 'y');
	system("pause");
	return 0;
}