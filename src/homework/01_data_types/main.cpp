//write include statements
#include "data_types.h"
#include<iostream>

//write namespace using statement for cout

using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	
	int num;        // Step 2a

	cout << "Please enter a number: " ;
	cin >> num ;         // Step 2b
	

	int result = multiply_numbers(num);

	cout << "Your number times 5 is: " << result ;     // Step 2c

	int num1 = 4 ;     // Step 2d

	result = multiply_numbers(num1);                       //Step 2e
                                                    
	cout << "\n 4 times 5 is: " << result << "\n";  // Added line breaks for visual aid
	return 0;
}
