#include <iostream>
using namespace std;

int main(void) {
	// cin : is used to take input from user usually from keyboard
	// >>  : is extraction operator,
	// used to extract the input value into a variable
	
	signed long long int a, b, c, sum;  // two longs just in case
	cout << "Enter value for a: ";
	cin >> a;  // taking input and then storing it to a pre-definedvariable
	cout << "Enter value for b: ";
	cin >> b;
	cout << "Enter value for c: ";
	cin >> c;
	// multiple extractions, cin >> a >> b >> c;
	sum = a + b + c;
	cout << "\n" << a << " + " << b << " + " << c << " = " << sum << endl;
	return 0;
}
