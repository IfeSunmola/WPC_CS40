/*
Name: Nicholas Sunmola
Description: Write a for loop that computes the sum of the odd integers in the range
of 0 to 100 inclusive.
Output: Sum of all odd numbers between 0 to 100 inclusive
Date: April 17, 2017
*/
#include <iostream>

using namespace std;

int i, sum;

int main()
{
	/*
	for loops can be used to set length of a loop.
	"i = 0 " is called initialization
	"i <= 100 " i call that condition check
	"i++" is increment
	the loops starts with the initialization, checks the condtion,
	EXECUTE THE CODE BLOCK, and then performs the increment

	The if in the for loop will continue to execute everytime the 
	for loop runs. The if block does not do anything if it evaluates to false
	for this program, the if block was executed 101 times
	*/
	for (i = 0; i <= 100; i++)
	{
		if ((i % 2) != 0)
		{
			sum += i;
		}
	}
	cout << sum << endl;
	system("pause");
	return 0;
}