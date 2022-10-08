//main.cpp
#include "bank_account.h"
#include "time.h"  //random num generator necessity

int main()
{

	//generate true random numbers
	srand(time(NULL));

	BankAccount account;
	display_balance(account);                           //10.3.2022 These are incomplete notes
	std::cout<<"Main: "<<account.get_balance()<<"\n";

	return 0;
}
