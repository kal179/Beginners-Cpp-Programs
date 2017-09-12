#include <iostream>
#include <string>

// Functions
// A function is group of statements arranged in logical order
// that perform a specific task/function
// Funtions are really important
// A funtion once written can be reused as many times as you like
// just like a variable
// Same function can be used with different inputs infinite times 
// or until ram give up
// structure:
//
//     return_type function_name(datatype parameter_name) {
//         statements
//		   return value;
//     }
//
// where the return_type is the datatype that function is going to return, 
// followed by function_name, in parenthesis the default parameters or input_values for 
// function with datatype is declared
// if function dosen't return anything and or dosen't take any input then
// we simply pass in void keyword 
// void simply means nothing or empty or none or valueless
//
// Functions are normally declared above main function 
// Functions can take as many parameters as they want


//Examples
// This function has return_type to none or void and takes input as string
void say_hello(char* name) {
	std::cout << "Hello, " << name << "!" << std::endl;
}

// This function has return_type integer and takes input as two integers
int add_numbers(int n1, int n2) {
	return n1 + n2;	  // returns sum of numbers 
}

// This function has return_type integer and takes input as two integers
int raise_power(int x, int index) {
	// raises the power of first input by second one 
	int tmp = 1;
	for (int i = 1; i <= index; i++) {
		tmp *= x;
	}
	return tmp;
}

// This function has return_type double(floating point number) and takes input as one double
double circumference_of_circle(double radii) {
	const double pi = 3.14159;
	double result = 2 * pi * radii;
	return result;
}

// Main itself is an function in which all the main statements go!
// complete file is compiled but only main function is executed
// That means each c++ program at least contains one function `main`
// Here,
// main has return_type int and take no parameters so we pass in void
// and returns the value 0

int main(void) {
	// First function 
	say_hello("Kalpak");  // replace the input called argument with your name
	
	// Second function 
	int addition = add_numbers(2, 3);  // try replacing with other numbers 
	std::cout << "2 + 3 = " << addition << std::endl;
	
	// Third function
	int sizteen_bit_value_is = raise_power(2, 16);
	std::cout << "16 bit values max is " << sizteen_bit_value_is << std::endl;
	
	// Fourth function
	double circum_ = circumference_of_circle(7.0);  // Try entering other values as inputs
	std::cout << "Cirsumference of circle having radii of 7.0 units is " << circum_ << std::endl;
	return 0;
}
