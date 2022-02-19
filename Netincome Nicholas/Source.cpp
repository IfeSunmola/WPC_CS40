/*
Name: Nicholas Sunmola
Description: Write a program that reads in the hours worked and the rate of pay.
Then calculate the weekly pay, weekly taxes, deductions: 
17% for income tax, 7% for provincial tax, 3.9% for pension, 
and 2.55% for employment insurance. You will have to account for overtime 
(time worked over 40 hours/week) which paid at time and a half.
Output: Weekly pay, income tax, provincial tax, tax on pension, Employement insurance and Net income.
Date: March 6th, 2017. 
*/
#include <iostream>
#include <iomanip>
using namespace std;

int Hours, PerHour, NewHour;
double WeeklyPay, IncomeTax, ProvinceTax, Pension, EmpInsurance, NetIncome, OverTime;
const double Income_Tax = 0.17, Province_Tax = 0.07, Pen_sion = 0.039, Emp_Insurance = 0.0255;

int main()
{
	cout << "How many hours did you work for?" << endl;
	cin >> Hours;
	cout << "How much do you get paid per hour?" << endl;
	cin >> PerHour;

	if ((Hours <= 40) && (Hours > 0))
	// Checks if the hours entered is less than or equal to 40.
	//If true, the code block will execute.If false the program will 
	//skip to the else if block.
	{
		WeeklyPay = Hours * PerHour;
		cout << "You earn $" << fixed << setprecision(2) << WeeklyPay << " per week" << endl << endl;

		IncomeTax = Income_Tax * WeeklyPay;
		cout << "Income Tax: " << fixed << setprecision(2) << IncomeTax << endl << endl;

		ProvinceTax = Province_Tax * WeeklyPay;
		cout << "Provincial Tax: " << fixed << setprecision(2) << ProvinceTax << endl << endl;

		Pension = Pen_sion * WeeklyPay;
		cout << "Tax on Pension: " << fixed << setprecision(2) << Pension << endl << endl;

		EmpInsurance = Emp_Insurance * WeeklyPay;
		cout << "Employment Insurance: " << fixed << setprecision(2) << EmpInsurance << endl << endl;

		NetIncome = IncomeTax + ProvinceTax + Pension + EmpInsurance;
		cout << "NetIncome: " << fixed << setprecision(2) << NetIncome << endl << endl;
	}
	else if (Hours > 40)
	//checks if hours is greater than 40. if true, the code
	//block is executed. If false, it executes the else block.
	{
		OverTime = Hours - 40;
		NewHour = 40;
		cout << "You worked for " << OverTime << " extra hours\n\n";

		WeeklyPay = (NewHour * PerHour) + (OverTime * (PerHour * 1.5));
		cout << "Your weekly pay is $" << fixed << setprecision(2) << WeeklyPay << "\n\n";

		IncomeTax = Income_Tax * WeeklyPay;
		cout << "Income Tax: " << fixed << setprecision(2) << IncomeTax << endl << endl;

		ProvinceTax = Province_Tax * WeeklyPay;
		cout << "Provincial Tax: " << fixed << setprecision(2) << ProvinceTax << endl << endl;

		Pension = Pen_sion * WeeklyPay;
		cout << "Tax on Pension: " << fixed << setprecision(2) << Pension << endl << endl;

		EmpInsurance = Emp_Insurance * WeeklyPay;
		cout << "Employment Insurance: " << fixed << setprecision(2) << EmpInsurance << endl << endl;

		NetIncome = WeeklyPay - (IncomeTax + ProvinceTax + Pension + EmpInsurance);
		cout << "NetIncome: " << fixed << setprecision(2) << NetIncome << endl << endl;
	}
	else {
		cout << "I don't know what to say." << endl;
	}
	system("pause");
	return 0;
}