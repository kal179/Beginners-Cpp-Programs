#include <iostream>
#include <string>
using namespace std;

// Classes (OOP)
// classes are blueprints of objects
// they define the methods to manipulate objects behaviour, they also describe 
// what an object will be!
// Classes are known as type in programming
// So, class has methods(functions) to describe objects behaviour
// and has attributes(universal parameters within class) or properties of object 
// and has a name!
// Once class is written
// Multiple objects can be created, using the class(blueprint), each object is known
// as instance of class 
// Similarly like using a blueprint of building can be used to create many 
// different buildings!
// Process of creating class is called instantiation
// In class there are access specifiers
// public methods or members of class can be accessed or called outside the class 
// on its instances
// protected methods or members of class cannot be accessed or called outside class 
// Simple E.g.


// Notice the semicolon at end! It is necessary for declaring class 
// The area between the curly braces is claaed the body of class 
// All the attributes, methods go within the body
// The class has one public method
// say_hello

class My_Class {
	public:
		void say_hello(string name) {
			cout << "Hello, " + name << "!" << endl;
		}
};


// In main objects are just like variables and objects are its 'type'
// We call public method from class say_hello
// It is accessible outside class on instance of class

int main(void) {
	// Just taking input for public function say_hello from class My_Class
	string name;
	cout << "Enter your name: ";
	cin >> name;
	
	// Creating instance of class
	My_Class first_instance;
	first_instance.say_hello(name);   // dot(.) is used to access ppublic method or member of class
	return 0;
} 
