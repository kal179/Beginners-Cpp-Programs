#include <iostream>
#include <string>
using namespace std;

// NULL pointer and Dynamic memory allocation of arrays
// NULL is absence of value and is zero
// It is common practise to assign pointers whose address is currently not known to programmer
// to NULL 
// it is called NULL pointer as you might've guessed 
// Dynamic memory allocation for arrays is similar to that of variables
// except some syntactic expressions

int main(void) {
	int *null_pointer = NULL;  // Initializing null pointer
	int *arr_ptr = nullptr;  // same as above only using specific keyword in c++11  
	
	int size;
	cout << "Size for array: ";
	cin >> size;    // size for array is given by user
	arr_ptr = new int[size];  // pointer for location of memory for array in heap
	
	 // now that we have max size we can fill our array in any size 
	 // between 0 to size 
	int iteration;
	cout << "Enter number between 1 and " << size << ": ";
	cin >> iteration; 
	
	// Just avoiding errors
	if (iteration > size) {
		cout << "\nInvalid size for array!" << endl;
		return 0;
	}
	
	// Getting value for every single place in array 
	cout << "\n";
	for (int i = 0; i < iteration; i++){
		int tmp;
		cout << "Enter an integer for constructing our array: ";
		cin >> tmp;
		arr_ptr[i] = tmp;
	}
	
	// Printing our dynamically created array 
	cout << "\nValues in your dynamically created array: \n";
	for (int i = 0; i < iteration; i++){
		cout << arr_ptr[i] << "\n";
	}
	
	// deleting dynamically allocated arrays
	// this syntax is like delete array at location of arr_ptr in heap
	delete [] arr_ptr;       

	return 0;
}
