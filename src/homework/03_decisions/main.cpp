#include <iostream>
#include "decisions.h"

using namespace std;
using std::cin;
using std::cout;

int main() 
{
	int menu_selection; int grade; string usergrade;
	cout << "\nMAIN MENU\n\n1-Letter grade using if\n2-Letter grade using switch\n3-Exit\n";
	cin >> menu_selection;

	switch (menu_selection)
	{
		case 1:
			cout << "What was your grade from 0 to 100? ";
			cin >> grade;
			usergrade = get_letter_grade_using_if(grade);
			cout << "Your grade: " << usergrade;
			break;

		case 2:
			cout <<"What was your grade from 0 to 100? ";
			cin >> grade;
			usergrade = get_letter_grade_using_switch(grade);
			cout << "Your grade: " << usergrade;
			break;

		case 3:
			cout <<"You have chosen to exit the program.";
			break;

		default:
			cout <<"Invalid entry.";
	}
}


