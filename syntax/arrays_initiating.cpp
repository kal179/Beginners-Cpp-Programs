#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

// Arrays
// Arrays are collection of objects/values of same datatype
// like an array can contain list of prime numbers, or even numbers,
// or names of users
// structure:
// datatype name[size] = {objects/values};
// 
// Accessing elements/items in array by index 
// consider following some elements in array 
// Elements:		1|  2|  3|  4|  5|  6|  7| 
// Index/Location:  0|  1|  2|  3|  4|  5|  6|
// accessing elements: 
// name[index]

int main() {
	int primes[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 27};
	cout << "Primes from array: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << primes[i] << endl;
	}
	return 0;
}
