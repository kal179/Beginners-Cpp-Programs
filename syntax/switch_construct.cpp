#include <iostream>
#include <string>
using namespace std;

// Switch statements
// are really useful when checking multiple conditions for
// a single expression
// structure:
// switch (expression) {
//		case valueN:
//			statements;
//			break
//		default:
//			statements;
// }

// using switch construct
// REMEMBER: there can be as many case statements as you want
int main() {
	int fav_number;
	cout << "Enter a number: ";
	cin >> fav_number;
	switch (fav_number){
		case 19:
			cout << "You guessed my favourite number correctly!" << endl;
			break;
		case 20:
			cout << "You're close to guessing my favourite number!" << endl;
			break;
		case 18:
			cout << "You're close to guessing my favourite number!" << endl;
			break;	
		default:
			cout << "That isn't my favourite number nor close to it!" << endl;
	}
	return 0;
}
