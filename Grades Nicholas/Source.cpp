#include <iomanip>
#include <iostream>

using namespace std;

int GradeScore, Counter, ExcellentCounter = 1, AverageCounter = 1, BelowAverageCounter = 1, GradeSum;
double AverageScore, ExcellentPercent, AveragePercent, BelowAveragePercent, Excellent, Average, BelowAverage,
AveragePercentSum, ExcellentPercentSum, BelowPercentSum;
int main()
{
	do
	{
		//Will continue asking the user to input a grade and use -1 to terminate
		cout << "Input Your Grade(-1 to terminate): ";

		cin >> GradeScore;

		if (GradeScore <= 100)//Checks if the grade is less than 100
		{
			if (GradeScore <= 59)//Checks if the grade is less than or equal to 5	
			{
				BelowAverage += BelowAverageCounter;//Counts how many times the if block is
													// executed and assigns it to BelowAverage
			}

			else if (GradeScore >= 60 && GradeScore <= 79)
			/*Checks if the grade is greater than or equal to 60 and if it is less than or equal to  79*/
			{
				Average += AverageCounter;//Counts how many times the if block is executed and assigns it to Average
			}

			else if (GradeScore >= 80 && GradeScore <= 100)//Checks if the grade is greater than or equal to 80 and 
			                                               //if it is less than or equal to  100
			{
				Excellent += ExcellentCounter;//Counts how many times the if block is executed and assigns it to Excellent
			}

			GradeSum += GradeScore;//Counts the grade scores and assigns it to GradeSum
			Counter += 1;//Counts how many times the outer if is executed
		}


		else//if the grade is greater than 100, this code block will be executed
		{
			cout << "Input a score within the range of 0 to 100" << endl;
		}
	} while (GradeScore != -1);//Sets the termination key
	/*
	Since i am using -1 to terminate my program, the lines below are correcting the changes in the total 
	*/
	GradeSum++;

	Counter--;

	BelowAverage--;
	//End loop correction
	
	AverageScore = GradeSum / Counter;

	ExcellentPercent = (Excellent / Counter) * 100;

	AveragePercent = (Average / Counter) * 100;

	BelowAveragePercent = (BelowAverage / Counter) * 100;

	cout << "The average score is " << setprecision(2) << fixed << AverageScore << endl;

	cout << setprecision(0) << fixed << BelowAverage << " Student(s) has an unsatisfactory score" << endl;

	cout << setprecision(0) << fixed << Average << " Student(s) has a satisfactory score" << endl;

	cout << setprecision(0) << fixed << Excellent << " Student(s) has an Excellent score" << endl;

	cout << "The percentage of student(s) with an unsatisfactory score is " << setprecision(1) << fixed 
		<< BelowAveragePercent << endl;

	cout << "The percentage of student(s) with a satisfactory score is " << setprecision(1) << fixed 
		<< AveragePercent << endl;

	cout << "The percentage of student(s) with an Excellent score is " << setprecision(1) << fixed 
		<< ExcellentPercent << endl;
	system("pause");
	return 0;
}

