#include <iostream>
#include <string>

// sizeof keyword/operator/function
// returns the size of datatype or variable assigned to that datatype
// in bytes 
// sizeof can be used to get size of an array

int main(void) {
	std::cout << "Int datatype can hold " << 8 * sizeof(int) << " bit values!" << std::endl;
	std::cout << "Long Long Int datatype can hold " << 8 * sizeof(long long int) << " bit values!" << std::endl;
	std::cout << "Float datatype can hold " << 8 * sizeof(float) << " bit values!" << std::endl;
	std::cout << "Double datatype can hold " << 8 * sizeof(double) << " bit values!" << std::endl;
	std::cout << "Char datatype can hold " << 8 * sizeof(char) << " bit values!" << std::endl;
	std::cout << "Char16_t datatype can hold " << 8 * sizeof(char16_t) << " bit values!" << std::endl;
	
	float arr[19];
	std::cout << "\narr variable holds " << 8 * sizeof(arr) << " bits in total!" << std::endl;
	std::cout << "arr stores 19 float values so,\nsizeof(float) * 19 * 8 bits are stored in total!" << std::endl;
	
	// Application of sizeof() operator for getting the size of any array
	int fib[7] = {1, 1, 2, 3, 5, 8, 13};   // Try changing size and or array or datatype and values accordingly
	int size_of_array = sizeof(fib) / sizeof(fib[0]);
	std::cout << "\nThe size of array is " << size_of_array << "!" << std::endl;
	
	// This is useful in functions which get array as input and need to know their size 
	
	return 0;
}
