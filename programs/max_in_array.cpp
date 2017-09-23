#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// Finding the max integer/float 
// in an array

long int max(const long int arr[], const long int size) {
	if (size == 1) {
		return arr[0];
	} else if (size <= 0) {
		return -1;
	}
	long int res = arr[0];
	for (int index = 1; index < size; index++) {
		if (arr[index] > res) {
			res = arr[index];
		}
	}
	return res;
}


double max(const double arr[], const int size) {
 if (size == 1) {
		return arr[0];
	} else if (size <= 0) {
		return -1.0;
	}
	double res = arr[0];
	for (int index = 1; index < size; index++) {
		if (arr[index] > res) {
			res = arr[index];
		}
	}
	return res;
} 

int main(void) {
	// Test cases
	long int arr_ints[9] = {
		912389, 23987, 28137867, 90, 2321, 4322121, 28397, 216799, 0
	};
	double arr_doubles[4] = {
		3.14, 3.141, 3.1415, 3.14159	
	};

	// Test 
	int max_in_arr_ints = max(arr_ints, 9);
	double max_in_arr_doubs = max(arr_doubles, 4);

	// Printing the test
	cout << "Max integer in array: " << max_in_arr_ints << endl;
	cout << "Max decimal-point num in array: " << max_in_arr_doubs << endl;
	return 0;
}
