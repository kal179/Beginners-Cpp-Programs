#include <iostream>
#include <string>
using namespace std;

// Pointers
// & address-of operator 
// e.g.  &var
// The operator returns the address of variable in the memory
// these addresses are hexadecimal numbers
// they are simply location of variable in memory

int main(void){
	signed short int max_val;
	max_val = 32768;
	cout << "Address of max_val variable in memory is " << &max_val << endl;
	
	int arr[5] = {1, 4, 9, 16, 25};
	cout << "Address of arr variable in memory is " << &arr << endl;
	return 0;
}
