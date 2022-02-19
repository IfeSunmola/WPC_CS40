/*
Name: Nicholas Sunmola
Date: March 23, 2017
Description: The purpose of this assignment is for you to begin using while-loops.
*/
#include <iomanip>
#include <iostream>

using namespace std;

int Number, EvenInt;
int main()
{
	Number = 1;// Initialization
	/*
	The while block will continue to execute till when Number is less than or equal to 5
	*/
	while (Number <= 5) //Conditon 
	{
		cout << Number << setw(4) << Number * Number << endl;
		Number++;//Adds 1 to the number.Without increment, you might endup with an infinte loop. 
	}

	EvenInt = 4;
	cout << EvenInt << endl;
	while (EvenInt > -6)
	{
		EvenInt = EvenInt - 2;	
		cout << EvenInt << endl;
	}

	system("pause");
	return 0;
}