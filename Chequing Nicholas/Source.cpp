#include <iomanip>
#include <iostream>

using namespace std;
int Choice;
double WithDraw, Deposit, Balance, ReceiptWithdraw, ReceiptDeposit;
char Receipt;

int main()
{
	cout << "Input your account balance: ";
	cin >> Balance;
	
	do
	{
		cout << "Your account balance is $" << setprecision(2) << fixed << Balance << endl;
		cout << "Choose your action: " << endl;
		cout << "1. Withdrawal" << endl;
		cout << "2. Deposit" << endl;
		cout << "3. Quit" << endl;
		cout << "Reply 1, 2 or 3: ";
		cin >> Choice;
		system("cls");//clears the screen
        
		switch (Choice)
		{
		case 1:
			cout << "How much do you want to withdraw?";
			cin >> WithDraw;

			if (WithDraw < Balance)//checks if the user has enough to withdraw
			{
				Balance -= WithDraw;//Subtracts the amount withdrawn and assigns it to Balance
				ReceiptWithdraw = WithDraw;
			}

			else
			{
				cout << "Work harder and then come back" << endl;
			}
			break;

		case 2:
			cout << "How much do you want to deposit?";
			cin >> Deposit;

			Balance += Deposit;//adds the amount withdrawn and assigns it to Balance
			ReceiptDeposit = Deposit;
			break;

		case 3:
			cout << "Thank you for banking with us. Have a nice day" << endl;//Exit message
			break;

		default:cout << "Reply 1, 2 or 3" << endl;//if the user enters a number != 1, 2 or 3
		}
		cout << "Do you need a receipt?(y/n): ";
		cin >> Receipt;
		if (Receipt == 'y')//checks if the user needs receipt
		{
			if (ReceiptWithdraw > 0)//avoid printing out 0
			{
				cout << "You withdrew $" << ReceiptWithdraw << endl;
			}
			if (ReceiptDeposit > 0)//avoid printing out 0
			{
				cout << "You deposited $" << ReceiptDeposit << endl;
			}
		}
	} while (Choice != 3);//Exits when the user inputs 3
	cout << "Your closing balance is $ " << Balance << endl;
	system("pause");
	return 0;
}