#include <iostream>
#include <string>
using namespace std;

// checks if a number is prime or not 
// using exhaustive numeration technique
bool is_prime(unsigned long int n) {
	if (n == 1) {
		return false;
	} else {
		for (int i = 2; i < n; i++){
			if (n % i == 0){
				return false; 
			}
		}
		return true;
	}
}

int main() {
	unsigned long int x;
	cout << "Enter a positive number: ";
	cin >> x;
	if (is_prime(x)) {
		cout << x << " is a prime number!" << endl;
	} else {
		cout << x << " is not a prime number!" << endl;
	}
	return 0;
}
