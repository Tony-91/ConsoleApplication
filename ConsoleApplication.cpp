//============================================================================
// Name        : ConsoleApplication.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	std:: string name;
	std:: string streetAddress;
	std:: string city;
	int zipCode;

	std:: cout << "Please enter your first and last name : ";
	std::getline(std::cin, name);

	std:: cout << "Enter your Street Address : ";
	std::getline(std::cin, streetAddress);

	std:: cout << "Enter your City : ";
	std::getline(std::cin, city);

	std:: cout << "Enter your Zip Code : ";
	std::cin >> zipCode;

	std::cout << '\n';
	std::cout << "Hi, " << name << '\n';
	std::cout << "You're street address is " << streetAddress << '\n';
	std::cout << "You reside in " << city << '\n';
	std::cout << "In the " << zipCode << " zip code." << '\n';

	return 0;
}
