#include <iostream>
#include "functions.h"
using namespace std;

int main() {

	//Create some test strings
	cout << "Is \"tacocat\" a palindrome: " << isPalindrome("tacocat") << " [Should be a 1]" << endl;
	cout << "Is \"race car\" a palindrome: " << isPalindrome("race car") << " [Should be a 1]" << endl;
	cout << "Is \"was it a car or a cat i saw\" a palindrome: " << isPalindrome("was it a car or a cat i saw") << " [Should be a 1]" << endl;
	cout << "Is \"pumpkin pie\" a palindrome: " << isPalindrome("pumpkin pie") << " [Should be a 0]" << endl;
	cout << "Is \"231\" a palindrome: " << isPalindrome("231") << " [Should be a 0]" << endl << endl;
	cout << "Let's check if the empty string is a palindrome: " << endl;
	cout << "Is \" \" a palindrome: " << isPalindrome(" ") << " [Should be a 1]" << endl;
	


	return 0;
}