/*
Name: Nicholas Sunmola
Assignment: Envelope Labelling
Date: 02/14/2017
Description: An assignment on how to format spaces
*/
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
	cout << "Nicholas Sunmola \n";
	cout << "19 Celtic Bay\n";
	cout << "Winnipeg, MB R3t 2TT\n";
	//Setw adds spaces before the text
	cout << setw(100) << "\n";
	cout << setw(30) << "Mr.Perenewoski\n";
	cout << setw(37) << "Windsor Park Collegiate\n";
	cout << setw(33) << "1015 Cottowood Road\n";
	cout << setw(33) << "Winnipeg, MB R2J 1G3\n";
	system("pause");
	return 0;
}