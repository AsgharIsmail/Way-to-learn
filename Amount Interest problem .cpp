#include <iostream>

using namespace std;

double minimum(double total_amount); 


int main()
{
	double total_amount, interest, minimum_amount;
	double account_balance = 0;

	while( account_balance >= 0 )		// Loop until a negative balance is entered
	{
		cout << "Please enter in the account balance.\n";
		cin >> account_balance;

		if( account_balance < 0 )		// This will get out of the loop if the value is negative
			break;

		if( account_balance <= 1000 )
		{
			interest = .015 * account_balance;
			total_amount = interest + account_balance;
		}
		if( account_balance > 1000 )
		{
			interest = .01 * account_balance;
			total_amount = interest + account_balance;
		}
		minimum_amount = minimum( total_amount );

		cout<<"Your total amount is " << total_amount << endl;
		cout<<"Your interest due is " << interest << endl;
		cout<<"Your minimum payment is "<< minimum_amount << endl;
	}
	return 0;
}
double minimum(double total_amount)
{
	double Amt = 0;

	if( total_amount <= 10 )
		Amt = total_amount;
	else if( 10 < total_amount * .01 )
		Amt = total_amount * .01;
	else
		Amt	= 10;
	return Amt;
}

