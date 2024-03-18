#include <iostream>

using namespace std;

int main() {
	cout << "Please pick a fruit \n" << endl;
	cout << "1. Apple\n" << endl;
	cout << "2. Banana\n" << endl;
	cout << "3. Orange\n" << endl;
	cout << "4. Grape\n" << endl;

	cout << "Enter Your choice: ";
	int choice;
	cin >> choice;
	system("cls");

	switch (choice)
	{
	case 1:
		cout << "You picked fruit number 1 so you recived an Apple" << endl;
		break;

	case 2:
		cout << "You picked fruit number 2 so you recived a Banana" << endl;
		break;

	case 3: 
		cout << "You picked fruit number 3 so you recived an Orange" << endl;
		break;

	case 4:
		cout << "You picked fruit number 4 so you recived a Grape" << endl;
		break;

	default:
		break;
	}

	return 0;
}