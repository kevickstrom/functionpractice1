// functionpractice1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void passwordMenu() {

	int showLogon = 0;
	while (showLogon < 1) {
		string password = "abc";
		string attempt;
		cout << "Enter your password >\t" << flush;
		cin >> attempt;
		if (attempt == password) {
			cout << "Access Granted.\n" << endl;
			showLogon = 1;
		}
		else {
			cout << "Acess Denied." << endl;
		}
	}
}
void menuOptionOne() {
	cout << "You have selection option ONE." << endl;
	cout << "Back (0)" << endl;
	cout << "Quit (5)" << endl;
	cout << "Select an option >\t" << flush;
}
void menuOptionTwo() {
	cout << "You have selection option TWO." << endl;
	cout << "Back (0)" << endl;
	cout << "Quit (5)" << endl;
	cout << "Select an option >\t" << flush;
}
void menuOptionThree() {
	cout << "You have selection option THREE." << endl;
	cout << "Back (0)" << endl;
	cout << "Quit (5)" << endl;
	cout << "Select an option >\t" << flush;
}
void menuOptionFour() {
	cout << "You have selection option FOUR." << endl;
	cout << "Back (0)" << endl;
	cout << "Quit (5)" << endl;
	cout << "Select an option >\t" << flush;
}
void mainMenu() {

	int menu = 0;
	while (menu < 1) {
		int menuSelection;
		cout << "\n**************" << endl;
		cout << "Menu Option 1." << endl;
		cout << "Menu Option 2." << endl;
		cout << "Menu Option 3." << endl;
		cout << "Menu Option 4." << endl;
		cout << "Quit (5)." << endl;
		cout << "**************\n" << endl;
		cout << "Select an option >\t" << flush;
		cin >> menuSelection;
		switch (menuSelection) {
		case 1:
			menuOptionOne();
			cin >> menuSelection;
			if (menuSelection == 5) {
				menu = 1;
			}
			break;
		case 2:
			menuOptionTwo();
			cin >> menuSelection;
			if (menuSelection == 5) {
				menu = 1;
			}
			break;
		case 3:
			menuOptionThree();
			cin >> menuSelection;
			if (menuSelection == 5) {
				menu = 1;
			}
			break;
		case 4:
			menuOptionFour();
			cin >> menuSelection;
			if (menuSelection == 5) {
				menu = 1;
			}
			break;
		case 5:
			menu = 1;
			break;
		default:
			cout << "Invalid Selection." << endl;
			break;
		}
	}

}

int main()
{
	passwordMenu();
	mainMenu();

	cout << "Quitting..." << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
