#include <iostream>
#include <string>
using namespace std;

// Pointers are variables 
// which hold the address of other variables as its value
// '*' is used before variable name and after datatype while assigning it value

int main(void) {
	int age = 15;
	char initial = 'K';
	float pi = 3.14159;
	string lang = "CPP";
	
	// Now pointers
	int *age_ptr = &age;   // pointer of variable age 
	char * initial_ptr = &initial;   // pointer of variable initial 
	float* pi_ptr = &pi;     // pointer of variable pi 
	string *lang_ptr = &lang;   // pointer of variable lang 
	
	// Note: the datatype of variable and its pointer variable should be same
	// and the '*' astreisk can be placed anywhere between datatype and variable name
	// good practise is first example
	
	cout << "Pointer value of variable which is int: " << age_ptr << endl;
	cout << "Pointer value of variable which is char: " << initial_ptr << endl;
	cout << "Pointer value of variable which is float: " << pi_ptr << endl;
	cout << "Pointer value of variable which is string: " << lang_ptr << endl;
	return 0;
}
