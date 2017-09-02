#include <iostream>
using namespace std;

// Comparison/Relational operators (comparators)
// Used for comparing two values
// == operator is used to check equality beween two values
// == is used in place of =, 'cause, = is used as assignment operator
// used for assigning the values to variables
// != is used to check non-equality ...
// < is used as less than operator ...
// > used as greater than operator ...
// <= is used to check if value on right is less than equal to left one 
// >= is used to check if value on right is greater than equal to left one 
//
// Comparators can be used to compare integers, floats/doubles, chars, strings
// The comparison either results in true or false 
// true and false are boolean datatypes
// used to determine the condition/state or result of comparison  
// they can also be stored in variables in bool datatype 

int main() {
	// Examples
	// 27*3 == 3*3*3*3  -> this is true
	// 3*3*3*3 != 9*9   -> this is false 
	// 5 < 2 + 2 * 2    -> this is true 
	// -3.14159 > 3.14159 -> this is false 
	//  90 >= 90        -> this is true 
	// 123 <= 122       -> this is false 
	
	bool state = true; 
	state = false;   
	// this is how you store bool variables
	// bool can be either true or false 
	// couting the values of bools is not a good option 
	return 0;
}
