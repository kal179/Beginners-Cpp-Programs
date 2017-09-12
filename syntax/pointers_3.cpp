#include <iostream>
#include <string>
using namespace std;

// Contents-of operator
// returns the value of variable from its pointer variable
// e.g. *pointer

int main(void) {
	unsigned long long int light_year = 9460700000000;
	unsigned long long int *light_year_ptr = &light_year;
	unsigned long int speed_of_light_mph = 299792458;
	unsigned long int *speed_ptr = &speed_of_light_mph;
	
	cout << "One light year is roughly " << *light_year_ptr << "!" << endl;
	cout << "And its speed in mph is roughly " << *speed_ptr << "!" << endl;
	return 0;
}
