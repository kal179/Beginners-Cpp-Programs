#include <iostream>
#include <string>
using namespace std;

// Overloading Functions
// This technique lets us write multiple functions by same name 
// It is helpful when we need the same function to take different datatypes as its input
// The functions must have same parameters, but, datatypes can differ 
// E.g.

// If first argument is array of integers
// then this function is used 
int sum(int *arr, int size){
	int res = 0;
	for (int i = 0; i < size; i++){
		res += arr[i];
	}
	return res;
}

// If first argument is array of floats/doubles
// then this function is used 
double sum(double *arr, int size){
	double res = 0;
	for (int i = 0; i < size; i++){
		res += arr[i];
	}
	return res;
}


int main(void) {
	// Test arrays
	int y[4] = {1,2,3,4};
	double z[4] = {3.14159, 2.333331, 0.12, 9.0};
	
	// Results of functions
	int result_int = sum(y, 4);
	double result_doule = sum(z, 4);
	
	cout << "Sum of array of integers: " << result_int << endl;
	cout << "Sum of array of floating-point numbers: " << result_doule << endl;
	
	return 0;
}
