/*
Jayden Wehr
functions.cpp

*/

#include <string>
#include "functions.h"
#include <iostream>
using namespace std;

bool isPalindrome(string s) {

	bool isPalindrome = false;

	//Remove any spaces from the string
	for (int i = 0; i < s.size(); i++) {

		if (s.at(i) == ' ') {
			s.erase(i, 1);
		}
	}


	string reversedString = "";
	
	//Starting from the end of the string, append the characters to reversedString.
	for (int i = s.size() - 1; i >= 0; i--) {

		reversedString += s.at(i);
	}

	//If the original string is equal to the reversed string, then s is a palindrome.
	if (s == reversedString) {
		isPalindrome = true;
	}

	return isPalindrome;

}