#include <iostream>
#include <string>

// sizeof keyword/operator/function
// returns the size of datatype or variable assigned to that datatype
// in bytes 

int main(void) {
	std::cout << "Int datatype can hold " << 8 * sizeof(int) << " bit values!" << std::endl;
	std::cout << "Long Long Int datatype can hold " << 8 * sizeof(long long int) << " bit values!" << std::endl;
	std::cout << "Float datatype can hold " << 8 * sizeof(float) << " bit values!" << std::endl;
	std::cout << "Double datatype can hold " << 8 * sizeof(double) << " bit values!" << std::endl;
	std::cout << "Char datatype can hold " << 8 * sizeof(char) << " bit values!" << std::endl;
	std::cout << "Char16_t datatype can hold " << 8 * sizeof(char16_t) << " bit values!" << std::endl;
	return 0;
}
