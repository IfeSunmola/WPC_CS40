/*
Name: Nicholas Sunmola
Description: Write a program that inputs a person's salary, echoes the data, 
tells them what tax level they are in, and what their taxes are as well as their net income.
Date: March 1st, 2017
Output: Salary, Tax level, Tax to be paid and Net Salary.
*/
#include <iostream>
using namespace std;

double Salary;
double NetSalary;
double Tax;
const float TaxLevel1 = 0.15, TaxLevel2 = 0.23, TaxLevel3 = 0.35;
int main()
{
	cout << "Enter your Salary: " << endl;
	cin >> Salary;

	/*
	The If statement checks if a conditon is true. If the condition is, the code within its
	code block will be executed. If the condtion is false, the code within the code block 
	will not be executed;
	*/
	if ((Salary < 23460) && (Salary >=0))
	/*"<" checks if the salary is less than 23460. ">=" checks if the salary is greater than or eaual to 0;
	"&&" is true only if the two conditions are true
	*/
	{
		Tax = TaxLevel1 * Salary;
		NetSalary = Salary - Tax;
		cout << "Your Salary is: " << Salary << "\n";
		cout << "You are on tax level one\n";
		cout << "Tax to be paid: " << Tax << "\n";
		cout << "Your Net Salary is: " << NetSalary << "\n";
	}

	//The else if allows the user to check multiple conditons

	else if ((Salary >= 23460) && (Salary < 52390))
       /*">=" checks if the salary is greater than or equal to 23460. "<" checks if the salary is less than 52390. The 
	code block is executed only if the two conditions are true.*/
	{
		Tax = (TaxLevel1 * 23460) + (TaxLevel2 * (Salary - 23460));
		NetSalary = Salary - Tax;
		cout << "Your Salary is: " << Salary << "\n";
		cout << "You are on tax level two\n";
		cout << "Tax to be paid: " << Tax << "\n";
		cout << "Your Net Salary is: " << NetSalary << "\n";
	}
	else if ((Salary >= 52390))
		/* ">=" checks if the salary is greater than or equal to 52390. If the condition returns true, the code block is
		executed*/
	{
		Tax = (TaxLevel1 * 23460) + (TaxLevel2 * (Salary - 28930) + (TaxLevel3 * (23460 + 28930)));
		NetSalary = Salary - Tax;
		cout << "Your Salary is: " << Salary << "\n";
		cout << "You are on tax level three\n";
		cout << "Tax to be paid: " << Tax << "\n";
		cout << "Your Net Salary is: " << NetSalary << "\n";
	}
	else// else codeblock will be executed if the user enters a number not meeting any of the conditions above e.g -21
	{
		cout << "Are you even working?" << endl;
	}

	system("pause");
	return 0;
}//End Main