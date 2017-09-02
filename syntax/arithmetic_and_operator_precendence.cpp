#include <iostream>
using namespace std;

// Arithmetic in c++
// + : operator for addition
// - : for subtraction
// / : for division
// * : for multiplication 
// % : for getting remainder(remaining value after division) called modulus


int main(void) {
	signed long long int add_ex, subtract_ex, mult_ex, mod_ex;
	double  division_ex;
	add_ex = 1232112 + 27267;
	subtract_ex  = 987654321 - 123456789;
	division_ex = 12269.33 / 3.5;
	mult_ex = 7 * 7;
	mod_ex = 1234566 % 9;
	
	cout << "Addition example: " << add_ex << "\n";
	cout << "Subtraction example: " << subtract_ex << "\n";
	cout << "Division example: " << division_ex << "\n";
	cout << "Multiplication example: " << mult_ex << "\n";
	cout << "Modulus example: " << mod_ex << endl;
	
	// Operator precendence
	// An expression is executed as per rules of maths
	// multiplication , division first then addition, subtraction
	// this is called as operator precendence
	// to avoid unwanted results from program we should use '()' brackets for priority operations
	// e.g.
	int exp_1 = 5 + 4 * 2;
	int exp_2 = (5 + 4) * 2;
	cout << "Expected result: " << 18 << "\n";
	cout << "Result of expression without brackets: " << exp_1 << "\n";
	cout << "Result of expression with brackets: " << exp_2 << "\n";
	return 0;
}
