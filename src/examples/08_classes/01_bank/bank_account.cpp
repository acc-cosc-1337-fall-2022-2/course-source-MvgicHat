//bank_account.cpp
#include "bank_account.h"
using std::cout;

void BankAccount::set_balance_from_db()
{
    balance = rand() % 10000 + 1;  //generate random value from 1 to 10,000
}

void BankAccount::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && amount < balance)
    {
        balance -= amount;
    }
}

//10.3.2022 These are incomplete notes