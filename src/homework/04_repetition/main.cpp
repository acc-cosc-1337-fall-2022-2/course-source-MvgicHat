#include <iostream>
#include "dna.h"

using std::cin;
using std::cout;
using namespace std;

int main()
{
	int menu_selection; int num; int usernum1; int usernum2; int factor_answer; int gcd_answer; std::string exi;
	do
	{
		cout << "\n1-Factorial\n2-Great Common Divisor\n3-Exit\n";
		cin >> menu_selection;

		if (menu_selection == 1)
		{
			cout << "What number would you like to factorialize? ";
			cin >> num;
			factor_answer = factorial(num);
			cout << "That number factorialized is: " << factor_answer;
		}

		if (menu_selection == 2)
		{
			cout << "Find the GCD! First number?\n";
			cin >> usernum1;
			cout << "Second number?\n";
			cin >> usernum2;
			gcd_answer = gcd(usernum1, usernum2);
			cout << "The Greatest Common Divisor of those two numbers is " << gcd_answer << ".";
		}

		else if (menu_selection == 3)
		{
			cout << "Are you sure you wish to exit? (Y/N)\n";
			cin >> exi;
		}

	} while (menu_selection == 1 || menu_selection == 2);

}

