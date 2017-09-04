#include <iostream>
#include <string>
using namespace std;

// Datatypes 
// int -> holds integer
// signed -> can hold both positive and negative values
// un-signed -> can hold only positive values, bigger than signed 
// short -> can hold small, 2-bytes, integer values
// float -> can hold floating point numbers (decimal numbers)
// double -> can hold decimal numbers, bigger than float 
// char -> can hold character values, one byte 128 bit values
// string -> holds an array of characters in memory
// long -> increases the storage capacity of datatypes 
// long long -> same as above, but, bigger capacity than long 64 bit values


int main() {
	// Example uses
	
	signed short int fav;   
	// signed int holds at least 16 bit numbers 1 bit for positive negative determination
	fav = 1729;
	
	unsigned int biggest_value;
	biggest_value = 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2;
	
	float pi;
	pi = 3.14159;
	
	double eulers_number;
	eulers_number = 2.7182818284590452353;
	
	char initial;
	initial = 'K';
	
	string message;
	message = "I Love c++";
	
	// Glimpse of long long integer
	unsigned long long very_long_number;
	very_long_number = 127361253612538725378498767;
	
	long double eulers_bigger_number;
	eulers_bigger_number = 2.7182818284590452353602874713527;
	
	cout << "Error did'nt occur!" << endl;
	return 0;
}
