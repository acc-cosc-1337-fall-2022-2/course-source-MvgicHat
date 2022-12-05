//bank_account.h
#include<stdlib.h>//rand-random number generator function
#include<iostream>

class BankAccount
{
public:
    BankAccount(){}
    BankAccount(int b) : balance(b) {}
    int get_balance() const {return balance;}
    void deposit(int amount);
    void withdraw(int amount);

private:
    int balance{0};
    void set_balance_from_db();
};

//THE FOLLOWING ARE FREE FUNCTIONS!!
//They are NOT part of the BankAccount class
void display_balance(BankAccount account);
