
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// Encapsulation
// simply means to keep what's inside surrounded/packed/together and also 
// to protect it.
// 'encapsulate' itself means surrounded.
// In oop it means keep all methods, attributes within class and to also restrict
// outside access to inner workings of class 'cuz they it'll may make a mess or 
// change the behaviour of class and also might harm the application
// and produce useless results!
// Members of class are protected by access specifiers.
// Thus, encapsulation is an important aspect of oop.


class Example {
	public:
		void set_entry_info(string name_input) {
			name = name_input;
		}

		string get_name() {
			return name;
		}

	private:
		string name;
};

int main(void) {
	string name;
	cout << "Enter your name: ";
	cin >> name;

	Example object;  // initializing instance
	object.set_entry_info(name);   // setting value of private variable from class Example
	
	cout << "Hey, " << object.get_name() << "!" << endl;

	// Outputs Hey, <name>!
	return 0;
}
