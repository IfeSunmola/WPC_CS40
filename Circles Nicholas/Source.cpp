/*
Name: Nicholas Sunmola
Date: March 7, 2017
Desciption: Write a program that calculates either the diameter, 
circumference, or the area of a circle. Your program will ask the user 
for the radius of the circle, then if the user wants the diameter, 
circumference, or the area.
*/
#include <iostream>
#include <iomanip>
#include <math.h> // includes the file to perform calculations

using namespace std;
double const pi = 3.14;
double Radius, Diameter, Circum, Area;
int choice; 
char Cont;

int main()
{
	/*
	The do while loop will execute the code first before checking the condition.
	The code within the do block will be executed if the condition evaluates to true
	If the condition is false, the program will not execute the code in the do block.
	*/
	do 
	{
	cout << "Enter the radius: ";
	cin >> Radius;
	cout << endl << endl;

	cout << "What do you want to calculate. (Reply with 1, 2, 3 or 4)\n\n";
	cout << "1. Diameter\n\n";
	cout << "2. Circumference\n\n";
	cout << "3. Area of a circle\n\n";
	cout << "4. All of the above\n\n";

	cout << "Reply: ";
    cin >> choice;
	cout << endl << endl;
	if (choice == 1) // if the user enters 1, the diameter of the circle will be calculated
	{
		Diameter = 2 * Radius;
		cout << "You chose Diameter\n\n";
		cout << "The diameter of the circle is : " << setprecision(2) 
			<< fixed <<  Diameter << " meters\n\n";
	}
	else if (choice == 2)// else if the user enters 2, the circumference of the circle will be calculated
	{
		Circum = 2 * pi * Radius;
		cout << "You chose Circumference\n\n";
		cout << "The circumference of the circle is: " << setprecision(2)
			<< fixed << Circum << " meters\n\n";
	}
	else if (choice == 3)//else if the user enters 3, the area of the circle will be calculated
	{
		Area = pi * Radius * Radius;
		cout << "You chose area of circle\n";
		cout << "The area of the circle is: " << setprecision(2)
			<< fixed << Area << " square meters\n\n";
	}
	else if (choice == 4)//else if the user enters 4, the diameter, circumference and the area will be calculated
	{
		Diameter = 2 * Radius;
		Circum = 2 * pi * Radius;
    	Area = pi * pow(Radius, 2);
		// The pow is used to index a number. i.e Radius ^ 2

		cout << "The diameter of the circle is : " << setprecision(2)
			<< fixed << Diameter << " meters\n\n";

		cout << "The circumference of the circle is: " << setprecision(2)
			<< fixed << Circum << " meters\n\n";

		cout << "The area of the circle is: " << setprecision(2)
			<< fixed << Area << " square meters\n\n";
	}
	else // if the user enters a number that is not 1, 2, 3 or 4 , the user will be told to reply with 1, 2, 3 or 4
	{
		cout << "Reply with 1, 2 or 3\n\n";
	}

	cout << "Do you want to make another calculation. (Reply with y/n)\n\n";
	cout << "Reply: ";
	cin >> Cont;

	cout << endl;
	} while (Cont == 'y');
	/* The code above will be executed as long as the user enters y. If the user
	enters any other letter, the program will terminate
	*/
	system("pause");
	return 0;
}