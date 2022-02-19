/*
Name: Nicholas Ifeoluwapo Sunmola
Date: June 6, 2017
Description: A stock market
*/
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

double ApplePrice = 9.65, FacebookPrice = 7.56,
GooglePrice = 10.91, SnapPrice = 5.87, InstaPrice = 7.97, Balance, AppleRand, FacebookRand, GoogleRand, SnapRand, InstaRand;
int  DayCount = 1, AppleBuyCounter, FacebookBuyCounter, GoogleBuyCounter, SnapBuyCounter, InstaBuyCounter, ContinueChoice;

//Function Prototype
void Question();
void BuyOrSellChoice();
void AppleBuy();
void AppleSell();
void FacebookBuy();
void FacebookSell();
void NewMain();
void GoogleBuy();
void GoogleSell();
void SnapBuy();
void SnapSell();
void InstaBuy();
void InstaSell();
void OutputBuyShares();
void RandomGen();
void LineBreaker();
//end function prototype
int main()
{
	//system("MODE CON COLS=60 LINES=50");
	cout << "Your opening balance is: ";
	cin >> Balance;
	cout << "Your Opening Balance is $" << Balance << endl << endl;
	NewMain();
	cout << "Credit: Nicholas Ifeoluwapo Sunmola" << endl << endl;
	cout << "With a little help from stackoverflow.com" << endl << endl;
	cout << "June 2017" << endl << endl;
	system("pause");
	return 0;
}
void NewMain()
{
	
	int Choice, AppleChoice, FacebookChoice, GoogleChoice, SnapChoice, InstaChoice;
	srand((unsigned int)time(NULL));//removes the unsigned warning
	//srand(time(NULL));
	do
	{
		do
		{
			Question();
			cout << "Reply with the corresponding number: ";
			cin >> Choice;
			cout << endl << endl;
			switch (Choice)
			{
			case 1:
				cout << "You chose Apple" << endl << endl;

				BuyOrSellChoice();
				cin >> AppleChoice;
				cout << endl << endl;

				switch (AppleChoice)//nested  switch case
				{
				case 1:
					AppleBuy();
					RandomGen();
					break;
				case 2:
					AppleSell();
					RandomGen();
					break;
				case 3:
					cout << "You're doing nothing for today. Enjoy!!!" << endl << endl;
					cout << "Your Current Balance is " << Balance << endl << endl;
					cout << endl;
					RandomGen();
					break;
				default:
					cout << "Reply with the corresponding number" << endl << endl;
				}//end nested switch case


				break;
			case 2:
				cout << "You chose Facebook" << endl << endl;

				BuyOrSellChoice();
				cin >> FacebookChoice;
				cout << endl << endl;

				switch (FacebookChoice) // nested switch case
				{
				case 1:
					FacebookBuy();
					RandomGen();
					break;
				case 2:
					FacebookSell();
					RandomGen();
					break;
				case 3:
					cout << "You're doing nothing for todady. Enjoy!!!" << endl << endl;
					cout << "Your current balance is " << Balance << endl << endl;
					cout << endl;
					RandomGen();
					break;
				default:
					cout << "Reply with the corresponding number" << endl << endl;
				}//End nested switch case
				break;
			case 3:
				cout << "You chose Google" << endl << endl;

				BuyOrSellChoice();
				cin >> GoogleChoice;
				cout << endl << endl;

				switch (GoogleChoice)//Nested switch case
				{
				case 1:
					GoogleBuy();
					RandomGen();
					break;
				case 2:
					GoogleSell();
					RandomGen();
					break;
				case 3:
					cout << "You're doing nothing for today. Enjoy!!!" << endl << endl;
					cout << "Your current balance is " << Balance << endl << endl;
					cout << endl;
					RandomGen();
					break;
				default:
					cout << "Reply with the corresponding number" << endl << endl;
					break;
				}//end nested switch case
				break;
			case 4:
				cout << "You chose Snapchat" << endl << endl;

				BuyOrSellChoice();
				cin >> SnapChoice;
				cout << endl << endl;
				switch (SnapChoice)//nested switch case
				{
				case 1:
					SnapBuy();
					RandomGen();
					break;
				case 2:
					SnapSell();
					RandomGen();
					break;
				case 3:
					cout << "You're doing nothing for today. Enjoy!!!" << endl << endl;
					cout << "Your current balance is " << Balance << endl << endl;
					cout << endl;
					RandomGen();
					break;
				default:
					cout << "Reply with the corresponding number" << endl << endl;
					break;
				}//end nested switch case
				break;
			case 5:
				cout << "You chose Instagram" << endl << endl;

				BuyOrSellChoice();
				cin >> InstaChoice;
				cout << endl << endl;
				switch (InstaChoice)//nested switch case
				{
				case 1:
					InstaBuy();
					RandomGen();
					break;
				case 2:
					InstaSell();
					RandomGen();
					break;
				case 3:
					cout << "You're doing nothing for today" << endl << endl;
					cout << "Your current balance is " << Balance << endl << endl;
					cout << endl;
					RandomGen();
					break;
				default:
					cout << "Reply with the corresponging number" << endl << endl;
					break;
				}
			case 6:
				break;

			default:     // Outer switch
				cout << "Reply with the Company's number" << endl << endl;
				break;
			}
		} while (DayCount <= 31 && Choice != 6);//end Inner do while loop
		cout << "Keep this up and you will be on top of the charts" << endl << endl;
		cout << "Your closing balance is " << Balance << endl << endl;
	} while (Choice != 6);//end outer do while loop
}
void Question()
{
	
	cout << "Choose your company: " << endl << endl;

	cout << "1. Apple \t";
	cout << ApplePrice << endl << endl;

	cout << "2. Facebook \t";
	cout << FacebookPrice << endl << endl;

	cout << "3. Google \t";
	cout << GooglePrice << endl << endl;

	cout << "4. Snapchat \t";
	cout << SnapPrice << endl << endl;

	cout << "5. Instagram \t";
	cout << InstaPrice << endl << endl;

	cout << "6. Exit" << endl << endl;
}

void BuyOrSellChoice()
{
	cout << "1. Buy Shares" << endl << endl;
	cout << "2. Sell Shares" << endl << endl;
	cout << "3. Do nothing for today" << endl << endl;
	cout << "Reply with corresponding number: ";

}
void AppleBuy()
{
	int AppleCountBuy, MaxBuy, ContinueChoice;
	double Apple_CountBuy, AppleRemBuy;
	MaxBuy = Balance / ApplePrice;//Calculates the maximum amount of shares the user can buy
	cout << "You are buying" << endl << endl;
	cout << "Maximum of " << MaxBuy << " share(s)" << endl << endl;
	cout << "How much do you wish to buy? ";
	cin >> AppleCountBuy;
	//system("cls);
	cout << endl << endl;


	Apple_CountBuy = AppleCountBuy * ApplePrice; //calculates the price of the total number of shares the user wants to buy
	if (Apple_CountBuy <= Balance) //If the user has enough money to buy the shares
	{
		AppleRemBuy = Balance - Apple_CountBuy; // calculates the amount left after buying the shares

		Balance = AppleRemBuy; // Assigns AppleRemBuy to Balance
		AppleBuyCounter += AppleCountBuy; //keeps adding the amount of apple shares bought altogether so it can be displayed in the inventory
	

		//cout << "Day " << DayCount << endl << endl;
		cout << "You bought " << AppleCountBuy << " share(s) for $" <<
			setprecision(2) << fixed << Apple_CountBuy << endl << endl;
		OutputBuyShares();
		cout << "Your Current Balance is " << setprecision(2) << fixed << Balance << endl;
		cout << endl;
	}
	else
	{
		cout << "Add more funds and try again" << endl << endl;
		cout << "Your Current Balance is " << setprecision(2) << fixed << Balance << endl;
		cout << endl;
		OutputBuyShares();
	}
	do
	{
		cout << "Will that be all for today?" << endl << endl;
		cout << "Reply 1 for Yes and 2 for No: ";
		cin >> ContinueChoice;
		//system("cls);
		switch (ContinueChoice)
		{
		case 1:
			cout << "The next day....." << endl << endl;
			DayCount+=1;
			cout << "Day " << DayCount << endl << endl;
			OutputBuyShares();
			break;
		case 2:
			cout << "Later that day..." << endl << endl;
			
			cout << "Day " << DayCount << endl << endl;
			NewMain();
			break;
		default:
			cout << "The next day" << endl << endl;
			cout << "Day " << DayCount << endl << endl;
			OutputBuyShares();
			break;
		}
	} while (ContinueChoice == 2);
}
void AppleSell()
{
	int AppleCountSell, ContinueChoice;
	double  Apple_CountSell, AppleRemSell;
	cout << "You are selling" << endl << endl;
	cout << "How many do you wish to sell: ";
	cin >> AppleCountSell;
	cout << endl << endl;

	
	Apple_CountSell = AppleCountSell * ApplePrice;
	
	if (AppleCountSell <= AppleBuyCounter)
	{
		AppleRemSell = Balance + Apple_CountSell;

		Balance = AppleRemSell;
		
		AppleBuyCounter -= AppleCountSell;
		//cout << "Day " << DayCount << endl << endl;
		cout << "You sold " << AppleCountSell << " share(s) for $" <<
			setprecision(2) << fixed << Apple_CountSell << endl << endl;
		OutputBuyShares();
		cout << "Your Current Balance is " << setprecision(2) << fixed << Balance << endl;
		cout << endl;
	}
	else
	{
		cout << "Add more shares and try again" << endl << endl;
		cout << "Your Current Balance is " << setprecision(2) << fixed << Balance << endl;
		cout << endl;
		OutputBuyShares();
	}
	do
	{
		cout << "Will that be all for today?" << endl << endl;
		cout << "Reply 1 for Yes and 2 for No: ";
		cin >> ContinueChoice;
		//system("cls);
		switch (ContinueChoice)
		{
		case 1:
			cout << "The next day....." << endl << endl;
			DayCount+=1;
			cout << "Day " << DayCount << endl << endl;
			OutputBuyShares();
			break;
		case 2:
			cout << "Later that day..." << endl << endl;
			
			cout << "Day " << DayCount << endl << endl;
			NewMain();
			break;
		default:
			cout << "The next day" << endl << endl;
			cout << "Day " << DayCount << endl << endl;
			OutputBuyShares();
			break;
		}
	} while (ContinueChoice == 2);
	
}
void FacebookBuy()
{
	int FacebookCountBuy, MaxBuy, ContinueChoice;
	double Facebook_CountBuy, FacebookRemBuy;
	MaxBuy = Balance / FacebookPrice;
	cout << "You are buying" << endl << endl;
	cout << "Maximum of " << MaxBuy << " share(s)" << endl << endl;
	cout << "How much do you wish to buy? ";
	cin >> FacebookCountBuy;
	cout << endl << endl;
	//system("cls);

	
	Facebook_CountBuy = FacebookCountBuy * FacebookPrice;
	//Random number

	
	//End Random number;
	if (Facebook_CountBuy <= Balance)
	{
		FacebookRemBuy = Balance - Facebook_CountBuy;
		FacebookBuyCounter += FacebookCountBuy;
		Balance = FacebookRemBuy;


	//	cout << "Day " << DayCount << endl << endl;
		cout << "You bought " << FacebookCountBuy << " share(s) for $" <<
			setprecision(2) << fixed << Facebook_CountBuy << endl << endl;
		OutputBuyShares();
		cout << "Your Current Balance is " << setprecision(2) << fixed << Balance << endl;
		cout << endl;
	}
	else
	{
		cout << "Add more funds and try again" << endl << endl;
		cout << "Your Current Balance is " << setprecision(2) << fixed << Balance << endl;
		cout << endl;
		OutputBuyShares();
	}
	do
	{
		cout << "Will that be all for today?" << endl << endl;
		cout << "Reply 1 for Yes and 2 for No: ";
		cin >> ContinueChoice;
		//system("cls);
		switch (ContinueChoice)
		{
		case 1:
			cout << "The next day....." << endl << endl;
			DayCount+=1;
			cout << "Day " << DayCount << endl << endl;
			OutputBuyShares();
			break;
		case 2:
			cout << "Later that day..." << endl << endl;
			
			cout << "Day " << DayCount << endl << endl;
			NewMain();
			break;
		default:
			cout << "The next day" << endl << endl;
			cout << "Day " << DayCount << endl << endl;
			OutputBuyShares();
			break;
		}
	} while (ContinueChoice == 2);
}
void FacebookSell()
{
	int FacebookCountSell, ContinueChoice;
	double  Facebook_CountSell, FacebookRemSell;
	cout << "You are selling" << endl << endl;
	cout << "How many do you wish to sell: ";
	cin >> FacebookCountSell;
	cout << endl << endl;

	Facebook_CountSell = FacebookCountSell * FacebookPrice;
	//Random number
	
	//End Random number
	if (FacebookCountSell <= FacebookBuyCounter)
	{
		FacebookRemSell = Balance + Facebook_CountSell;

		Balance = FacebookRemSell;
	
		FacebookBuyCounter -= FacebookCountSell;
		//cout << "Day " << DayCount << endl << endl;
		cout << "You sold " << FacebookCountSell << " share(s) for $" <<
			setprecision(2) << fixed << Facebook_CountSell << endl << endl;
		OutputBuyShares();
		cout << "Your Current Balance is " << setprecision(2) << fixed << Balance << endl;
		cout << endl;
	}
	else
	{
		cout << "Add more shares and try again" << endl << endl;
		cout << "Your Current Balance is " << setprecision(2) << fixed << Balance << endl;
		cout << endl;
		OutputBuyShares();
	}
	do
	{
		cout << "Will that be all for today?" << endl << endl;
		cout << "Reply 1 for Yes and 2 for No: ";
		cin >> ContinueChoice;
		//system("cls);
		switch (ContinueChoice)
		{
		case 1:
			cout << "The next day....." << endl << endl;
			
			DayCount+=1;
			cout << "Day " << DayCount << endl << endl;
			OutputBuyShares();
			break;
		case 2:
			cout << "Later that day..." << endl << endl;
			
			cout << "Day " << DayCount << endl << endl;
			NewMain();
			break;
		default:
			cout << "The next day" << endl << endl;
			cout << "Day " << DayCount << endl << endl;
			OutputBuyShares();
			break;
		}
	} while (ContinueChoice == 2);
}
void GoogleBuy()
{
	int GoogleCountBuy, MaxBuy, ContinueChoice;
	double Google_CountBuy, GoogleRemBuy, GoogleRand;
	MaxBuy = Balance / GooglePrice;
	cout << "You are buying" << endl << endl;
	cout << "Maximum of " << MaxBuy << " share(s)" << endl << endl;
	cout << "How much do you wish to buy? ";
	cin >> GoogleCountBuy;
	cout << endl << endl;
	//system("cls);

	
	Google_CountBuy = GoogleCountBuy * GooglePrice;
	//Random number

	GooglePrice = rand() % 4 + 6;
	GoogleRand = (rand() % 100);
	GoogleRand /= 100;
	GooglePrice += GoogleRand;
	//End Random number;
	if (Google_CountBuy <= Balance)
	{
		GoogleRemBuy = Balance - Google_CountBuy;

		Balance = GoogleRemBuy;
		GoogleBuyCounter += GoogleCountBuy;

		//cout << "Day " << DayCount << endl << endl;
		cout << "You bought " << GoogleCountBuy << " share(s) for $" <<
			setprecision(2) << fixed << Google_CountBuy << endl << endl;
		OutputBuyShares();
		cout << "Your Current Balance is " << setprecision(2) << fixed << Balance << endl;
		cout << endl;
	}
	else
	{
		cout << "Add more funds and try again" << endl << endl;
		cout << "Your Current Balance is " << setprecision(2) << fixed << Balance << endl;
		cout << endl;
		OutputBuyShares();
	}
	do
	{
		cout << "Will that be all for today?" << endl << endl;
		cout << "Reply 1 for Yes and 2 for No: ";
		cin >> ContinueChoice;
		//system("cls);
		switch (ContinueChoice)
		{
		case 1:
			cout << "The next day....." << endl << endl;
			DayCount+=1;
			cout << "Day " << DayCount << endl << endl;
			OutputBuyShares();
			break;
		case 2:
			cout << "Later that day..." << endl << endl;
			
			cout << "Day " << DayCount << endl << endl;
			NewMain();
			break;
		default:
			cout << "The next day" << endl << endl;
			cout << "Day " << DayCount << endl << endl;
			OutputBuyShares();
			break;
		}
	} while (ContinueChoice == 2);
}
void GoogleSell()
{
	int GoogleCountSell, ContinueChoice;
	double  Google_CountSell, GoogleRemSell;
	cout << "You are selling" << endl << endl;
	cout << "How many do you wish to sell: ";
	cin >> GoogleCountSell;
	cout << endl << endl;

	
	Google_CountSell = GoogleCountSell * GooglePrice;
	//Random number
	
	//End Random number
	if (GoogleCountSell <= GoogleBuyCounter)
	{
		GoogleRemSell = Balance + Google_CountSell;

		Balance = GoogleRemSell;

		AppleBuyCounter -= GoogleCountSell;
		//cout << "Day " << DayCount << endl << endl;
		cout << "You sold " << GoogleCountSell << " share(s) for $" <<
			setprecision(2) << fixed << Google_CountSell << endl << endl;
		OutputBuyShares();
		cout << "Your Current Balance is " << setprecision(2) << fixed << Balance << endl;
		cout << endl;
		
	}
	else
	{
		cout << "Add more shares and try again" << endl << endl;
		cout << "Your Current Balance is " << setprecision(2) << fixed << Balance << endl;
		cout << endl;
		OutputBuyShares();
	}
	do
	{
		cout << "Will that be all for today?" << endl << endl;
		cout << "Reply 1 for Yes and 2 for No: ";
		cin >> ContinueChoice;
		//system("cls);
		switch (ContinueChoice)
		{
		case 1:
			cout << "The next day....." << endl << endl;
			DayCount+=1;
			cout << "Day " << DayCount << endl << endl;
			OutputBuyShares();
			break;
		case 2:
			cout << "Later that day..." << endl << endl;
			
			cout << "Day " << DayCount << endl << endl;
			NewMain();
			break;
		default:
			cout << "The next day" << endl << endl;
			cout << "Day " << DayCount << endl << endl;
			OutputBuyShares();
			break;
		}
	} while (ContinueChoice == 2);
}
void SnapBuy()
{
	int SnapCountBuy, MaxBuy, ContinueChoice;
	double Snap_CountBuy, SnapRemBuy;
	MaxBuy = Balance / SnapPrice;
	cout << "You are buying" << endl << endl;
	cout << "Maximum of " << MaxBuy << " share(s)" << endl << endl;
	cout << "How much do you wish to buy? ";
	cin >> SnapCountBuy;
	cout << endl << endl;
	//system("cls);

	
	Snap_CountBuy = SnapCountBuy * SnapPrice;
	
	if (Snap_CountBuy <= Balance)
	{
		SnapRemBuy = Balance - Snap_CountBuy;

		Balance = SnapRemBuy;
		SnapBuyCounter += SnapCountBuy;

		//cout << "Day " << DayCount << endl << endl;
		cout << "You bought " << SnapCountBuy << " share(s) for $" <<
			setprecision(2) << fixed << Snap_CountBuy << endl << endl;
		OutputBuyShares();
		cout << "Your Current Balance is " << setprecision(2) << fixed << Balance << endl;
		cout << endl;
		
	}
	else
	{
		cout << "Add more funds and try again" << endl << endl;
		cout << "Your Current Balance is " << setprecision(2) << fixed << Balance << endl;
		cout << endl;
		OutputBuyShares();
	}
	do
	{
		cout << "Will that be all for today?" << endl << endl;
		cout << "Reply 1 for Yes and 2 for No: ";
		cin >> ContinueChoice;
		//system("cls);
		switch (ContinueChoice)
		{
		case 1:
			cout << "The next day....." << endl << endl;
			DayCount += 1;
			cout << "Day " << DayCount << endl << endl;
			OutputBuyShares();
			break;
		case 2:
			cout << "Later that day..." << endl << endl;
			
			cout << "Day " << DayCount << endl << endl;
			NewMain();
			break;
		default:
			cout << "The next day" << endl << endl;
			cout << "Day " << DayCount << endl << endl;
			OutputBuyShares();
			break;
		}
	} while (ContinueChoice == 2);
}
void SnapSell()
{
	int SnapCountSell, ContinueChoice;
	double  Snap_CountSell, SnapRemSell;
	cout << "You are selling" << endl << endl;
	cout << "How many do you wish to sell: ";
	cin >> SnapCountSell;
	cout << endl << endl;

	Snap_CountSell = SnapCountSell * SnapPrice;
	//Random number
	
	//End Random number
	if (SnapCountSell <= SnapBuyCounter)
	{
		SnapRemSell = Balance + Snap_CountSell;

		Balance = SnapRemSell;
		SnapBuyCounter -= SnapCountSell;
		//cout << "Day " << DayCount << endl << endl;
		cout << "You sold " << SnapCountSell << " share(s) for $" <<
			setprecision(2) << fixed << Snap_CountSell << endl << endl;
		OutputBuyShares();
		cout << "Your Current Balance is " << setprecision(2) << fixed << Balance << endl;
		cout << endl;
		
	}
	else
	{
		cout << "Add more shares and try again" << endl << endl;
		cout << "Your Current Balance is " << setprecision(2) << fixed << Balance << endl;
		cout << endl;
		OutputBuyShares();
	}
	do
	{
		cout << "Will that be all for today?" << endl << endl;
		cout << "Reply 1 for Yes and 2 for No: ";
		cin >> ContinueChoice;
		//system("cls);
		switch (ContinueChoice)
		{
		case 1:
			cout << "The next day....." << endl << endl;
			DayCount+=1;
			cout << "Day " << DayCount << endl << endl;
			OutputBuyShares();
			break;
		case 2:
			cout << "Later that day..." << endl << endl;
			
			cout << "Day " << DayCount << endl << endl;
			NewMain();
			break;
		default:
			cout << "The next day" << endl << endl;
			cout << "Day " << DayCount << endl << endl;
			OutputBuyShares();
			break;
		}
	} while (ContinueChoice == 2);
}
void InstaBuy()
{
	int InstaCountBuy, MaxBuy, ContinueChoice;
	double Insta_CountBuy, InstaRemBuy;
	MaxBuy = Balance / InstaPrice;
	cout << "You are buying" << endl << endl;
	cout << "Maximum of " << MaxBuy << " share(s)" << endl << endl;
	cout << "How much do you wish to buy? ";
	cin >> InstaCountBuy;
	cout << endl << endl;
	//system("cls);

	
	Insta_CountBuy = InstaCountBuy * InstaPrice;
	//Random number

	
	//End Random number;
	if (Insta_CountBuy <= Balance)
	{
		InstaRemBuy = Balance - Insta_CountBuy;

		Balance = InstaRemBuy;
		InstaBuyCounter += InstaCountBuy;

		//cout << "Day " << DayCount << endl << endl;
		cout << "You bought " << InstaCountBuy << " share(s) for $" <<
			setprecision(2) << fixed << Insta_CountBuy << endl << endl;
		OutputBuyShares();
		cout << "Your Current Balance is " << setprecision(2) << fixed << Balance << endl;
		cout << endl;
		
	}
	else
	{
		cout << "Add more funds and try again" << endl << endl;
		cout << "Your Current Balance is " << setprecision(2) << fixed << Balance << endl;
		cout << endl;
		OutputBuyShares();
	}
	do
	{
		cout << "Will that be all for today?" << endl << endl;
		cout << "Reply 1 for Yes and 2 for No: ";
		cin >> ContinueChoice;
		//system("cls);
		switch (ContinueChoice)
		{
		case 1:
			cout << "The next day....." << endl << endl;
			DayCount+=1;
			cout << "Day " << DayCount << endl << endl;
			OutputBuyShares();
			break;
		case 2:
			cout << "Later that day..." << endl << endl;
			
			cout << "Day " << DayCount << endl << endl;
			NewMain();
			break;
		default:
			cout << "The next day" << endl << endl;
			cout << "Day " << DayCount << endl << endl;
			OutputBuyShares();
			break;
		}
	} while (ContinueChoice == 2);
}

void InstaSell()
{
	int InstaCountSell, ContinueChoice;
	double  Insta_CountSell, InstaRemSell;
	cout << "You are selling" << endl << endl;
	cout << "How many do you wish to sell: ";
	cin >> InstaCountSell;
	cout << endl << endl;

	Insta_CountSell = InstaCountSell * InstaPrice;
	//Random number
	
	//End Random number
	if (InstaCountSell <= InstaBuyCounter)
	{
		InstaRemSell = Balance + Insta_CountSell;
		InstaBuyCounter -= InstaCountSell;
		Balance = InstaRemSell;

		//cout << "Day " << DayCount << endl << endl;
		cout << "You sold " << InstaCountSell << " share(s) for $" <<
			setprecision(2) << fixed << Insta_CountSell << endl << endl;
		OutputBuyShares();
		cout << "Your Current Balance is " << setprecision(2) << fixed << Balance << endl;
		
	}
	else
	{
		cout << "Add more shares and try again" << endl << endl;
		cout << "Your Current Balance is " << setprecision(2) << fixed << Balance << endl;
		OutputBuyShares();
	}
	do
	{
		cout << "Will that be all for today?" << endl << endl;
		cout << "Reply 1 for Yes and 2 for No: ";
		cin >> ContinueChoice;
		//system("cls);
		switch (ContinueChoice)
		{
		case 1:
			cout << "The next day....." << endl << endl;
			DayCount+=1;
			cout << "Day " << DayCount << endl << endl;
			OutputBuyShares();
			break;
		case 2:
			cout << "Later that day..." << endl << endl;
			
			cout << "Day " << DayCount << endl << endl;
			NewMain();
			break;
		default:
			cout << "The next day" << endl << endl;
			cout << "Day " << DayCount << endl << endl;
			OutputBuyShares();
			break;
		}
	} while (ContinueChoice == 2);
}
void RandomGen()
{

	ApplePrice = rand() % 4 + 6;
	AppleRand = (rand() % 100);
	AppleRand /= 100;
	ApplePrice += AppleRand;

	FacebookPrice = rand() % 4 + 6;
	FacebookRand = (rand() % 100);
	FacebookRand /= 100;
	FacebookPrice += FacebookRand;

	GooglePrice = rand() % 4 + 6;
	GoogleRand = (rand() % 100);
	GoogleRand /= 100;
	GooglePrice += GoogleRand;

	SnapPrice = rand() % 4 + 6;
	SnapRand = (rand() % 100);
	SnapRand /= 100;
	SnapPrice += SnapRand;

	InstaPrice = rand() % 4 + 6;
	InstaRand = (rand() % 100);
	InstaRand /= 100;
	InstaPrice += InstaRand;
}
void OutputBuyShares()
{
	LineBreaker();
	cout << endl;
	if (AppleBuyCounter > 0)
	{
		cout << "You have " << AppleBuyCounter << " shares(s) of Apple" << endl;
	}
	if (FacebookBuyCounter > 0)
	{
		cout << "You have " << FacebookBuyCounter << " shares(s) of Facebook" << endl;
	}
	if (GoogleBuyCounter > 0)
	{
		cout << "You have " << GoogleBuyCounter << " shares(s) of Google" << endl;
	}
	if (InstaBuyCounter > 0)
	{
		cout << "You have " << InstaBuyCounter << " shares(s) of Instagram" << endl;
	}
	if (SnapBuyCounter > 0)
	{
		cout << "You have " << SnapBuyCounter << " shares(s) of Snapchat" << endl;
	}
	LineBreaker();
	cout << endl;
}
void LineBreaker()
{
	for (int i = 0; i <= 20; i++)
	{
		cout << "= ";
	}
}


