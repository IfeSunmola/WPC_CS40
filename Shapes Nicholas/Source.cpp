/*
Name: Nicholas Sunmola
Assignment Name: Shapes: A Formatting Exercise
Program Description: This program uses the set width function to form the pattern of some shapes.
*/
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
	//For parallelogram and Trapezium
	cout << "PARALLELOG";
	cout << setw(30) << "APEZO\n";
	cout << setw(2) << "A";
	cout << setw(9) << "R";
	cout << setw(23) << "R";
	cout << setw(7) << "I\n";
	cout << setw(3) << "R";
	cout << setw(9) << "A";
	cout << setw(30) << "TRAPEZOID\n";
	cout << setw(15) << "ALLELOGRAM\n\n";

	//For Rectangle and Diamond
	cout << "RECTANGLE";
	cout << setw(29) << "D\n";
	cout << "E";
	cout << setw(8) << "L";
	cout << setw(30) << "III\n";
	cout << "C";
	cout << setw(8) << "G";
	cout << setw(31) << "AAAAA\n";
	cout << "T";
	cout << setw(8) << "N";
	cout << setw(32) << "MMMMMMM\n";
	cout << "A";
	cout << setw(8) << "A";
	cout << setw(31) << "OOOOO\n";
	cout << "N";
	cout << setw(8) << "T";
	cout << setw(30) << "NNN\n";
	cout << "G";
	cout << setw(8) << "C";
	cout << setw(29) << "D\n";
	cout << "L";
	cout << setw(9) << "E\n";
	cout << "ELGNATCER\n\n";

	//For Square
	cout << "SQUARE-SQUARE\n";
	cout << "Q";
	cout << setw(13) << "R\n";
	cout << "U";
	cout << setw(13) << "A\n";
	cout << "A";
	cout << setw(13) << "U\n";
	cout << "R";
	cout << setw(13) << "Q\n";
	cout << "ERAUQS-ERAUQS\n";
	system("pause");
	return 0;
}//End Main