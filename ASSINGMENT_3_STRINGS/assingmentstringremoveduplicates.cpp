#include <iostream>
#include <string>

using namespace std;

string deleteConsecutiveStrings(string s)
{
	// Initialize start and stop pointers
	int i = 0;
	int j = 0;

	// Initialize an empty string for new elements
	string newElements = "";

	// Iterate string using j pointer
	while (j < s.length()) {
		// If both elements are same then skip
		if (s[i] == s[j]) {
			j++;
		}
		// If both elements are not same then append new element
		else if (s[j] != s[i] || j == s.length() - 1) {
			newElements += s[i];

			// After appending, slide over the window
			i = j;
			j++;
		}
	}

	// Append the last string
	newElements += s[j - 1];
	return newElements;
}

int main()
{
	// Input
	string s ;
	cin>>s;

	// Printing original string
	//cout << "Input : " << s << endl;

	// Printing result
	cout << deleteConsecutiveStrings(s) << endl;

	return 0;
}
