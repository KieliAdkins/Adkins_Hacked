/*
References
Kieli Adkins
CSC215
June 14, 2018
*/

// Including standard libraries
#include <iostream>

// Including std namespace
using namespace std;

// Declaring functions
void normalTrans(int terrorist, int joesCoffee);
void hackedTrans(int& terroristBalance, int& coffeeBalance);

// Initializing variables
int terrorist;
int joesCoffee;

/// Main function 
int main(int terrorist, int joesCoffee)
{
	// Declaring variables & references
	terrorist = 15000;
	int& terroristBalance = terrorist;
	joesCoffee = 300;
	int& coffeeBalance = joesCoffee;

	// Printing the Information 
	cout << "Welcome to the Bank of Terror.\n";
	cout << "In compliance with the CIA's request here are the following account balances:\n";

	// Printing Concantenation
	cout << "Dark Eye Agency: $" << terrorist << endl;
	cout << "Joe's Coffee Shop: $" << joesCoffee << endl;

	// Pausing the program
	system("pause");

	// Calling Normal Transaction Function
	normalTrans(terrorist, joesCoffee);

	// Printing Concantenation
	cout << "Dark Eye Agency: $" << terrorist << endl;
	cout << "Joe's Coffee Shop: $" << joesCoffee << endl;

	// Pausing the program
	system("pause");

	// Calling Hacked Transaction Function
	hackedTrans(terroristBalance, coffeeBalance);

	// Printing Concantenation
	cout << "Dark Eye Agency: $" << terrorist << endl;
	cout << "Joe's Coffee Shop: $" << joesCoffee << endl;

	// Pausing the program
	system("pause");

	// Return to ensure program completion
	return 0;
}

/// Normal Transaction Function
void normalTrans(int terrorist, int joesCoffee)
{
	// Printing the Information 
	cout << "\n\nAfter completing a normal transaction these are the account balances: \n";

	// Initializing a temporary variable
	int temp = terrorist;

	// Switching the account balances
	terrorist = joesCoffee;

	// Re-declaring the Joe's Coffee account balance
	joesCoffee = temp;

	// Return to ensure program completion
	return;
}

/// Hacked Transaction Function
void hackedTrans(int& terroristBalance, int& coffeeBalance)
{
	// Printing the Information 
	cout << "\n\nAfter hacking the terrorist's account here are the account balances: \n";

	// Initializing a temporary variable
	int temp = terroristBalance;

	// Switching the account balances
	terroristBalance = coffeeBalance;

	// Re-declaring the Joe's Coffee account balance
	coffeeBalance = temp;

	// Return to ensure program completion
	return;
}
