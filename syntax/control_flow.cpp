#include <iostream>
#include <cstdio>
using namespace std;

// Conditionals or control flow
// conditional statement/constructs is used to check condition 
// if it evaluates to boolean value true the code inside it is executed
// if the boolean value is false nothing inside the construct/block is executed
// program structure:
// if (condition) {
//    some code;	
// }
//
// if keyword: is used to check the conditions 
// else keyword: if the condition in if evaluates to false the code in else block is executed
// if else block is provided
// else if keyword: is used after if block(cannot be used before) used to check multi-ple
// conditions 
// if, else if, else forms a chain of conditions
// In chain if can be used once(at start, entry point), 
// else if's can be as my as person wants,
// else is used once(at end, exit point)
// once a condition in chain is true and block is executed 
// then checking conditions further in chain stops
// if's, else if's and else's can be used inside if, else if, else blocks as many times 
// a person wants
//
// conditions to check are made of relational operators and boolean operators

int main() {
	// Examples
	if (3*3*3*3 > 4*4*4){
		printf("%s", "81 is greater than 64!\n\n"); 
	} else {
		printf("%s", "64 is greater than 81!\n\n"); 
	}
	
	// Control flow chain
	signed char age;
	age = 15;
	if (age >= 0 and age <= 4) {
		printf("%s", "You are a baby!\n"); 
	} else if (age >= 5 and age <= 12) {
		printf("%s", "You are a kid!\n"); 
	} else if (age >= 13 and age <= 19) {
		printf("%s", "You are a teenager!\n"); 
	} else if (age >= 20 and age <= 49) {
		printf("%s", "You are an adult!\n"); 
	} else if (age >= 50 and age <= 79) {
		printf("%s", "You are old!\n"); 
	} else if (age >= 80 and age <= 120) {
		printf("%s", "You are super old!\n"); 
	} else {
		// else does not have a condition 
		// its like remaining block to execute if all condition/s fail
		printf("%s", "You are dead or non-human entity!\nWelcome to earth!\n"); 
	}
	
	// Only if's can exist independently
	bool is_alive = true;
	if (is_alive) {
		printf("\n%s\n", "You're still alive according to boolean!"); 
	}
	return 0;
}
