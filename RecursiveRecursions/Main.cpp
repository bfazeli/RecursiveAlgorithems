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
#include <string>

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

string reverseString(string &value, int size)
{
	if (size == 1)
		return value;
	--size;
	return reverseString(value.substr(1, size), size) + value.at(0);
}

string reverseString(string &value)
{
	int size = value.length();
	if (size == 0)
	{
		return "";
	}
	return reverseString(value, size);
}

int sumPowers(int power, int n)
{
	if (n == 1)
	{
		return n;
	}
	return pow(n, power) + sumPowers(power, n - 1);
}

int gcd(int num1, int num2)
{
	if (num1 % num2 == 0)
	{
		return num2;
	}
	return gcd(num2, num1 % num2);
}

int main()
{
	// Greet the user
	greetUser();

	// Get the user input for their menu choice
	int menuChoice = 4, num1, num2;
	string value;
	do
	{
		displayMenu();
		cout << "Enter your choice: ";
		cin >> menuChoice;
		switch (menuChoice)
		{
		case 1:
			cin.ignore();
			cout << "Enter the string to reverse: ";
			getline(cin, value);
			cout << "\nReversed: " << reverseString(value) << endl;
			break;
		case 2:
			cout << "Enter the power: ";
			cin >> num1;
			cout << "Enter the number of integers to sum up: ";
			cin >> num2;
			cout << "\nThe sum is: " << sumPowers(num1, num2) << endl;
			break;
		case 3:
			cout << "Enter the first number: ";
			cin >> num1;
			cout << "Enter the second number: ";
			cin >> num2;
			cout << "\nThe GCD is " << gcd(num1, num2) << endl;
			break;
		case 4:
			menuChoice = 4;
			break;
		default:
			cout << "\nError, incorrect value entered.\nPlease enter a value between 1 and 4." << endl;
			break;
		}
	} while (menuChoice != 4);
	
	system("pause");
	return 0;
}


