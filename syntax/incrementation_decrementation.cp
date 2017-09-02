#include <iostream>
using namespace std; 

// Increment and Decrement
// operators and techniques
// += is used for add a value to current vale of variable
// it is same as, a = a + some value or a += some value
// Likewise, more operators are,
// -= for subtraction, /= for division, *= for multiplication, %= for modulus
//
// ++ is an increment operator 
// It is used to add 1 to current value of variable
// same as a = a + 1 
// -- is an increment operator 
// It is used to subtract 1 from current value of variable
// same as a = a - 1 
// Note:
// Prefix (++a, --a) increments/decrements the value and then proceeds with execution 
// Postfix (a++, a--) executes the expression and then performs the incrementation or 
// decrementation

int main() {
	// Examples
	int a = 10;
	cout << "Start value of a is " << a << "\n";
	
	a += 100;  // now a = 110
	a -= 11; // now a = 99
	a *= 4;  // now a = 396
	a /= 3;  // now a = 132
	a++;  // now a = 133
	cout << "Now, value of a is " << a << "\n" << endl;
	
	int x, y;
	x = 555;
	y = x++;  
	// now x = 556 and y = 555, if confused try to understant comment on line 18,19
	cout << "x = " << x << "\ny = " << y << "\n\n";
	
	x = 19;
	y = ++x;
	// now x = 20 and y = 20
	cout << "x = " << x << "\ny = " << y << endl;
	return 0;
}
