//write include statements
#include "hwexpressions.h"
#include <iostream>

//write namespace using statement for cout

using std::cin;
using std::cout;

int main()
{
	
	double meal_amount; double tip_rate;                       //2a
	double tip_amount; double tax_amount; double total;

	cout << "How much did your meal cost today? $";          
	cin >> meal_amount;                                        //2b

	tax_amount = get_sales_tax_amount(meal_amount);            //2c

	cout << "What percentage would you like to tip?\n(Please express your answer as a decimal. ";
	cout << "For example, 20% would be .2): ";
	cin >> tip_rate;                                           //2d

	tip_amount = get_tip_amount(meal_amount, tip_rate);        //2e

	total = tip_amount + tax_amount + meal_amount;

	cout << "Meal Amount: " << meal_amount << "\nSales Tax: " << tax_amount <<
	"\nTip amount: " << tip_amount << "\nTotal: " << total ;


	return 0;
}
