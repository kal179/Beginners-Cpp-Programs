
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// Constructors
// are special members of class,
// whenever instances/objects of type class are initialized or defined
// these members are executed.
// there is no need to call 'em.
// Name of constructor is identical to that of class.
// Constructor does not have a return type, not void even!
// constructor can take as many parameters as you like!


// Example
class Construct_Playground {
		public:
			// Following method is a constructor 
			// constructor can take as many parameters as you like!
			Construct_Playground(double length_, double breadth_) {
				set_len(length_);  // this can be done like this length = length_; 
				set_breadth(breadth_);  // this can be done like this breadth = breadth_; 
			}

			void view_playground(){
				cout << "PLAYGROUND: \nDimensions: " << length << " x " << breadth << "\n" << endl;
				
				// First Border
				for (int i = 0; i < breadth; i++) {
					cout << "=";
				}
				cout << "\n";
				
				// Mid-Level
				for (int x = 0; x < length; x++) {
					cout << "|";    // First boundary in Mid-Level
					// Space between first and last boundary of Mid-Level
					for (int i = 0; i < breadth - 2; i++) {
						cout << " ";  
					}
					cout << "|\n";   // Last boundary in Mid-Level
				}
				
				// Last Border
				for (int i = 0; i < breadth; i++) {
					cout << "=";
				}
				// newline
				cout << endl;
			}

		private:
			double length;
			double breadth;

			void set_len(double length__){
				length = length__;
			}

			void set_breadth(double breadth__){
				breadth = breadth__;
			}
};

int main(void) {
	double l, b;
	cout << "Enter length for playground: ";
	cin >> l;
	cout << "Enter breadth for playground: ";
	cin >> b;
	
	
	// Constructor Example
	Construct_Playground play(l, b);  // Entering values directly into constructor
	play.view_playground();  
	return 0;
}
