#include <iostream>
#include <string>
using namespace std;

// Function declaration
// The parameters of functions can be given default values
// Functions must be written before their use or call 
// But if you want to write 'em after main in source file
// then
// They must be declared before main or their call
// and can be written after main function or their call
// E.g.

// Declaration before writing functions 
int square(int x);
int max_in_arr(int *arr, int size);

int main(void) {
	int n;
	cout << "enter a number: ";
	cin >> n;
	int n_squared = square(n);
	cout << "The square of number you entered is " << n_squared << endl;
	
	int array_of_nums[10] = {10, 21983, 54, 34, 384, 56, 90, 27, 21867546, 1};
	int max_ = max_in_arr(array_of_nums, 10);
	cout << "\nArray: ";  
	// Printing array 
	for (int f = 0; f < 10; f++){
		cout << array_of_nums[f] << " ";
	}
	// Printing Maximum value from array 
	cout << "\nMaximum number in array: " << max_ << endl;
	return 0;
}

// Functions written after main but declared before main 

// returns the square of number
// here i've given x the default value of 25 
// so if user dosen't input any value to the function as its argument then function 
// will return square of 25 
int square(int x = 25){
	return x * x;
}

// returns the maximum or biggest number from array 
int max_in_arr(int *arr, int size) {
	int max = arr[0];
	int counter = 0;
	while (counter < size) {
		if (arr[counter] > max){
			max = arr[counter];
		}
		++counter;
	}
	return max;
}
