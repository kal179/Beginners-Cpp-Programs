#include <iostream>
#include <string>
using namespace std;

// Dynamic memory(heap)
// Sometimes we don't know how much memory can be consumed by variables
// thus assigning the memory dynamically in c++ is an important technique
// Memory for that particular type is assigned at the runtime using 'new'
// operator 
// In stack memory management is automatic
// but in heap it is useful and necessary sometimes to free up memory 
// when it is no longer needed 
// it is accomplished using delete keyword/operator
// not freeing the memory in heap can result in memory leaks
// delete operator deletes the value stored in heap but the variable
// itself is pointer which stored the address of location in heap in stack
// so now that variable is pointing to non-existent location in heap 
// thus it is called dangling pointer and that variable can be used to store 
// new value in heap 

int main(void) {
	// E.g.
	long long int *heap_addr_ptr = new long long int;
	*heap_addr_ptr = 2471290;
	cout << "I like number " << *heap_addr_ptr << "!" << endl;
	delete heap_addr_ptr;
	
	cout << "Check this out, pointer of empty location in heap: " << heap_addr_ptr << endl;   // refering to non-existent address
	
	// reusing the address in heap 
	cout << "Enter any number(integer): ";
	cin >> *heap_addr_ptr;
	cout << "Number you entered is " << *heap_addr_ptr++ << endl;
	return 0;
}
