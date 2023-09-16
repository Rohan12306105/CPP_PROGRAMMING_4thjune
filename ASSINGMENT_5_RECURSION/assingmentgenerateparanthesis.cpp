#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

void printpa(int pos,int n,int open,int close){
	static char str[100];
	//base
	if(close==n){
		cout<<str<<endl;
		return;
	}
	//recursive
	else{
		if(open>close){
			str[pos]=')';
			printpa(pos+1,n,open,close+1);
		}
		if(open<n){
			str[pos]='(';
			printpa(pos+1,n,open+1,close);
		}
	}
}

int main(){
	int n; cin>>n;
	if(n>0){
		printpa(0,n,0,0);
	}
	return 0;
} 