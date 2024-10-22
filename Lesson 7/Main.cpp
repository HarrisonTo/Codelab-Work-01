#include <iostream>
#include <string>
using namespace std;

int main() {

	int num1, num2;
	cout << "Enter two numbers" << endl;
	cin >> num1 >> num2;
	cout << "Pick a calculation" << endl;
	cout << "1: Addition\n2 : Subtraction\n3 : Multiplication\n4 : Division" << endl;

	int menuChoice;
	cin >> menuChoice;
	switch (menuChoice)
		// \n allows for console to print on new line
		case 1:
			cout << num1 + num2 << endl;


			int choice; // user choice value

			// get user input
			cout << "Is it raining? (1 = yes, 2 = no)" << endl;
			cin >> choice;


			if (choice == 1) {
				cout << "Take an umbrella" << endl;
			}
			else if (choice == 2) {
				cout << "Take your sunglasses" << endl;
			}
			else {
				cout << "Invalid input" << endl;
			}

			/*switch (choice) {
			case 1:
				cout << "Take an umbrella" << endl;
			case 2:
				cout << "Take your sunglasses" << endl;
				break;
			default:
				cout << "Invalid input" << endl;
			}*/


			return 0;
}