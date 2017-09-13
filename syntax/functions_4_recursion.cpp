#include <iostream>
#include <string>
using namespace std;

// Recursion
// is a function that calls itself
// It is like loop for calling function
// so ite needs a condition to terminate
// else it'll run forever
// functions with recursion are called recursive functions
// Rem: Base case is necessary for recursion 
// otherwise it'll keep running forever
// Classic example of recursion is factorial function
// which calculates all the possible combinations of 'n' values
// Factorial e.g.

int factorial(int n) {
	if (n == 1) {
		return 1;
	} else {
		return n * factorial(n - 1);
	}
	
}
// If factorial is called with input as 5
// the this happens in else condition
// 5 * factorial(5 - 1) = 5 * 4 * factorial(4 - 1) = 5 * 4 * 3 * factorial(3 - 1) 
// =  5 * 4 * 3 * 2 * factorial(2 - 1) =  5 * 4 * 3 * 2 * 1 
// cause if condition returns 1 in last case 
// thus answer we get is factorial i.e. 120 in case of 5


int main(void) {
	// Taking input for factorial 
	int inp;
	cout << "Enter a number: ";
	cin >> inp;
	
	// Testing our function 
	// If input is 5 answer should be 120 as 5 * 4 * 3 * 2 * 1 = 120
	// Try it!
	int test = factorial(inp);
	cout <<  inp << "!" << " = " << test << endl;
	return 0;
}
