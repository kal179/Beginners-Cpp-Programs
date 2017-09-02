#include <iostream>
#include <cstdio>
using namespace std; 

// While loop
// executes instruction continously untill a given/specific condition is satisfied
// structure
// while (condition) {
//		statements/instructions			
// }
// while condition is true the statements will be evaluated repeatedly
// when condition is evalueated to false the execution of instructions in block
// stops
// if false condition never occurs the while loop will run forever

int main() {
	signed int i, x, num, n;
	i = 0;
	cout << "Numbers from 0 to 10 (generated): ";
	while (i < 10) {
		cout << i << ", ";
		i += 1; // or i++ or ++i 
	}
	cout << i;
	// when the i reaches value of 10 the execution will stop and loop
	// wil break
	cout << "\n" << endl;
	
	x = 0;
	cout << "Squares from 0 to 10 (generated): \n";
	while (x <= 20) {
		unsigned long int square;
		square = x * x;
		cout << "Square of " << x << " is " << square << "\n"; 
		x++;
	} 
	cout << "\n" << endl;
	
	num = 51;
	n = 0;
	cout << "Multiplication Table of " << num << " (generated): \n";
	while (n <= 12) {
		short int tmp = num * n;
		cout << num << " x " << n << " = " << tmp << "\n"; 
		n++;
	}
	cout << endl;
	return 0;
}
