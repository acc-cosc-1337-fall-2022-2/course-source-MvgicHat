#include <iostream>
using std::cout;

int main() 
{
	int* num_ptr = new int(5);//create dynamic memory
	//use memory
	cout<<*num_ptr<<"\n";
	//delete memory
	delete num_ptr;
	num_ptr = nullptr;

	return 0;
}