#include<iostream>
#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

int main() {
	string s;
	cin>>s;
	int r=0;
	for(int i=0;i<s.length();i++){
		int y=s[i];
		// cout<<s[i]<<" "<<y<<endl;
		if(i%2!=0){
			char x=s[i];
			x--;
			s[i]=x;
		}
		else{
			char x=s[i];
			x++;
			s[i]=x;
		}
	}
	cout<<s;
	return 0;
}