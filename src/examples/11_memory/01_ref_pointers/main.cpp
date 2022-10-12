#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int num = 20;
	int* num_ptr = &num;

	cout<<"Value of num via num: "<<num<<"\n";
	cout<<"Value of num via num_ptr: "<<*num_ptr<<"\n";
	cout<<"Address of num: "<<&num<<"\n";

	*num_ptr = 30;

	cout<<"Value of num via num: "<<num<<"\n";
	cout<<"Value of num via num_ptr: "<<*num_ptr<<"\n";

	return 0;
}
