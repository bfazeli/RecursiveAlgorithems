/*
Fazeli, Bijan

CS 262
May 7th, 2017

Lab 4
*/


/*
OUTLINE

1. Write a recursive function named reverseString. The function should take a string and
return the reverse of the string. For instance, the call reverseString(‘‘apple’’) should
return ‘‘elppa’’.

2. Write a recursive function named sumPowers that computes the sum of the first n integers
raised to the specified power. The function should take two parameters - the power, and n.
For example, the call sumPowers(4, 3) should return 98. The power is 4 and n = 3. Hence,
1^4 + 2^4 + 3^4 = 98.

3. Write a recursive function that implements Euclid’s algorithm. You can find more information
about Euclid’s algorithm in the Integer Properties chapter of your book.

4. Write a main function that asks for input for each of these functions to make testing the
functions easier.
*/

#include <iostream>

using namespace std;

void greetUser()
{
	// Display title
	cout << "--------------------------------------------------------------------" << endl;
	cout << "Welcome to Recursive Recursions!" << endl;
	cout << "--------------------------------------------------------------------" << endl;
	
	// Display purpose
	cout << "This program will first ask for a string and reverse it for you.\n"
		<< "It\'ll then proceed to sum up the first n integers raised to a power.\n"
		<< "Lastly, this program will find the GCD of two integers." << endl;
	cout << "--------------------------------------------------------------------\n" << endl;
}

void displayMenu()
{
	cout << "--------------------------------------------------------------------" << endl;
	cout << "1.\tReverse a string.\n"
		<< "2.\tSum up the first n integers raised to a power.\n"
		<< "3.\tFind the GCD of two integers.\n"
		<< "4.\tQuit." << endl;
	cout << "--------------------------------------------------------------------" << endl;
}

void reverseString(string &value)
{

}

int main()
{
	// Greet the user
	greetUser();

	// Get the user input for their menu choice
	int menuChoice = 4;
	do
	{
		displayMenu();
		cin >> menuChoice;
	} while (menuChoice != 4);
	

}


