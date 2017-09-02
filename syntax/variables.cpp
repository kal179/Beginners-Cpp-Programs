#include <iostream>
#include <string>
using namespace std;

/*
	Variables are used to store values in computer memory(primary)
	So they can be accessed later!
	Various data types are used to store different values 
	Variable name starts with letters (A-Z or a-z) or an underscore(_)
	followed by additional letters or numbers!
	They cannot start with numbers or special chars
	ref: http://www.cplusplus.com/doc/tutorial/variables/
*/

int main(void){
	int age; // declaring the datatype of variables
	age = 15; // assigning value to variables
	
	// Datatype of variables having same datatype value can be declared simultaneously
	// like, signed short int age, fav_number, birth-month;
	
	signed short int fav_number_w;
	fav_number_w = 19;
	
	float fav_number_r;
	fav_number_r = 3.14159 ;
	
	char name[] = "Kalpak";
	string planet = "Earth!"; 
	
	cout << "My age is " << age << " years!\n";
	cout << "My favourite whole number is " << fav_number_w << "!\n";
	cout << "My favourite real number is " << fav_number_r << "!\n";
	cout << "My name is " << name << " and I love " << planet << endl;
	return 0;
}
