#include <iostream>
#include <cstdio>
using namespace std;

// For loop
// executes the instructions in block for a given number of times
// structure:
// for (initializatio; condition; increment/decrement) {
//		statements/instructions	
// }
// For loop is finite form of while loop
// for loops are useful when we know when to stop iteration

int main() {
	// Examples
	cout << "Even numbers between 1 to 20:- ";
	for (int i = 1; i <= 20; i++) {
		// if i(current number) is divisible by 2 then it is even number 
		if (i % 2 == 0) {
			cout << i << " "; 
		}
	}
	cout << "\n" << endl;
	
	cout << "Odd numbers between 1 to 20:- ";
	for (int n = 1; n < 20; n++) {
		// if n(current number) is not divisible by 2 then it is odd number 
		if (!(n % 2 == 0)) {
			cout << n << " "; 
		}
	}
	cout << "\n" << endl;
	
	short int total, tmp;
	total = 0;
	tmp = 0;
	for (int x = 1; x <= 5; x++) {
		cout << "Enter number: ";
		cin >> tmp;
		total += tmp;
	}
	cout << "Sum of all numbers entered is " << total;
	cout << endl;
	return 0;
}
