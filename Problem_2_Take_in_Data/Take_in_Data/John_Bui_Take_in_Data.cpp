/*
John Bui - September 25, 2017 Period 3
Assignment Name : Take_in_Data
Display to the user questions to take in data
*/

// Libraries
#include <iostream> // gives access to cin, cout, cndl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
// Functions()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN
void main() {
	// Variables
	int number_of_classes; // How many classes are you in?
	char lunch_on_Adays; // What lunch do you have on A days?
	bool pet; // Do you have a pet?
	double weight; // How much do you weigh?


	// User Queries
	cout << "How many classes are you in? (answer with number) : ";
	cin >> number_of_classes;
	cout << "What lunch do you have on A days? ( A, B, C, D) : ";
	cin >> lunch_on_Adays;
	cout << "Do you have a pet (1) or do you not have a pet (0) : (1/0) ";
	cin >> pet;
	cout << "How much do you weigh? (in pounds to the nearest tenth place) : ";
	cin >> weight;

	// Display
	cout << "You are in " << number_of_classes << " classes." << endl;
	cout << "You have " << lunch_on_Adays << " lunch on A days." << endl;
	cout << boolalpha << "It is " << pet << " that you have a pet." << endl;
	cout << "Your weight is : " << weight << " pounds" << endl;

	pause();
}