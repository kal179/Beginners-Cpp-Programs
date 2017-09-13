#include <iostream>
#include <cstdlib>

// rand()
// is a function built-in cstdlib 
// someone already written this function so we don't have to write it again
// used to generate random numbers
// modulo operator % is used to generate random numbers within a specific range
// it generates pesudo random numbers
// each time you run the program it'll generate same numbers

int main(void) {
	int n;    // times the loop should print random numbers 
	std::cout << "Enter a number above zero: ";
	std::cin >> n;
	
	// Just avoiding unwanted results
	if (n <= 0){
		std::cout << "Expected a number above 0!" << std::endl;   
		return 0;
	}
	
	// Generating numbers in any order or range
	std::cout << "\nNumbers generated randomly using rand(): " << std::endl;
	
	std::cout << rand() << std::endl;  // this will generate a random number 
	for (int r = 1; r < n; r++) {
		// To generate 'n' random numbers in total
		std::cout << rand() << std::endl; 
	}
	
	// Generating numbers within a given specific range
	int x;
	std::cout << "\nEnter number for max number in range: ";
	std::cin >> x;
	
	std::cout << "\nNumbers generated randomly within range of 1 to " << x << ": " << std::endl;

	for (int r = 1; r <= n; r++) {
		// To generate 'n' random numbers in total
		std::cout << 1 + (rand() % x) << std::endl; 
	}
	return 0;
}
