#include <iostream>
#include <string>
using namespace std;

// The sum function is 
// going to return the sum of all 
// elements of in array 
//
// We'll overload the function
// so it'll return the sum of both integers and
// floats(decimal-point numbers)
//

int sum(int arr[],int size) {
	long long unsigned int res;
	res = 0;
	for (int i = 0; i < size; i++) {
		res += arr[i];
	}
	return res;
}

double sum(double arr[],double size) {
	double res;
	res = 0.0;
	for (int i = 0; i < size; i++) {
		res += arr[i];
	}
	return res;
}

int main(void) {
	// Test cases
	int array_of_nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	double array_of_doubs[7] = {3.14159, 3.14158, 3.14157, 3.14156, 3.14155, 3.14154, 3.14153};

	// Test 
	int sum_of_ints = sum(array_of_nums, 10);
	double sum_of_doubs = sum(array_of_doubs, 7);

	// Printing the sum out
	cout << "Sum of array(integers): " << sum_of_ints << endl;
	cout << "Sum of array(double): " << sum_of_doubs << endl;
	
	return 0;
}
