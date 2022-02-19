/*
Name: Nicholas Sunmola
Date: April 4th, 2017
Descripton: When a new baby was born, her mother opened a savings account with $1500.00 in it.
On each birthday, starting with the first, the bank added interest of 5.5% of the balance and the
mother added another $600.00 to the account. Write a loop that will determine how much money was in the account
on the child's 18th birthday.
*/
#include <iomanip>
#include <iostream>

using namespace std;

int Balance = 1500, MotherFee = 600, Age;
double BankIntrest = 1.055, NewBal;
int main()
{
	Age = 0; // Initialize age to 0
	while (Age < 18) //The code block below should continue executing untill age less than 18
	{
		NewBal = (Balance * BankIntrest) + MotherFee;
		Balance = NewBal;
		Age++; // Increment......Age = age+1
	}
	cout << "$" << setprecision(2) << fixed << NewBal << endl;
	system("pause");
	return 0;
}

