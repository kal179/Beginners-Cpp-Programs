#include <iostream>
#include <string>
using namespace std;

// Passing pointers as the arguments to functions
// Normally, while passing arguments to functions the values
// of arguments are copied if it is a variable
// but to pass pointers means whatever changes we make 
// to arguments actually change the value of orignal variable
// as we use its address to make changes
// In function '*' operator before parameter name is used to declare
// that the function is going to take pointer 
// This is known as Pass-by-Reference arguments
// E.g.

// using * operator to tell the function that its argument will be a pointer 
void squared(int *ref) {
	*ref = *ref * *ref;   // using * operator to access the value of variable by its address
}

// This function takes both types of inputs 
// argument passed by reference and also passed by value 
void raise_power(int *n, int index) {
	for (int i = 1; i < index; i++) {
		*n = *n * *n;
	}
}

int main(void) {
	// Func 1 
	// Taking input for number to square
	int number;
	cout << "Enter a 64-bit number: ";
	cin >> number;
	
	// Passing address of variable using address-of-operator
	squared(&number);   // Now the number is squared
	cout << "The number squared is " << number << "!" << endl;
	
	// Func 2 
	// Taking inputs for number and index for it 
	cout << "\nEnter another 64-bit number: ";
	cin >> number;
	
	int ind;
	cout << "Enter index(an integer) for number: ";
	cin >> ind;
	
	// Passing address of variable as reference and also passing value 
	// So this function comprises of both types of inputs
	raise_power(&number, ind);
	cout << "The number you entered raised to the power of " << ind << " is " << number << endl; 
	return 0;
}
