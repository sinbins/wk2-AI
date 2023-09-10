// Ai-Week2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <string.h>
using namespace std;
void DivisableByTwoNumbers(int, int);
void SwapLetters(string);
string RemoveVowels(string);
int main()
{
	
	DivisableByTwoNumbers(2, 3);
	SwapLetters("hello world");
	
	string b = "the cake is a lie";
	cout << "(\"" << b << "\" => \"" << RemoveVowels(b) << "\"" << endl;

}


// I put modulus with 0 to get an ideal division but I don't know if that's how specific you wanted it
void DivisableByTwoNumbers(int a, int b) {
	int maxAmount = 1000;
	for (int i = 0; i < maxAmount; i++) {
		if (i % a == 0 && i % b == 0) {
			cout << i << endl;
		}
	}
}

// I did this without looking anything up for reference so again I don't know if I'm doing it the "right way". It works but I feel like there's a more optimal way to do it.
void SwapLetters(string a) {
	string placeHolder;
	for (int i = a.size(); i >= 0; i--) {
		placeHolder += a[i];
	}
	cout << "(\"" << a << "\" => \"" << placeHolder << "\")" << endl;
}

//Is there a more effective way to do this
string RemoveVowels(string b) {
	string retVal = "";
	for (int i = 0; i < b.size(); i++) {
		if (!(b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u')) {
			retVal += b[i];
		}
	}
	return retVal;

}