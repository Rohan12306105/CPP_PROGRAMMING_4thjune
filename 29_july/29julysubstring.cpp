#include<iostream>
using namespace std;

void subString(string s, int n){
	// i = starting point
	// j = upcoming elements
	// n = length of the string
	for (int i = 0; i < n; i++)
		for (int j = 1; j <= n - i; j++)
			cout << s.substr(i, j) << endl;
}

int main(){
	string s = "abba";
	subString(s,s.length());
	return 0;
}
