#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

void print(string str,int i){
	//base
	if(i == str.size()){
		cout<<str<<" ";
		return;
	}
	//recursive
	if(str[i]=='?'){
		str[i]='0';  print(str,i+1);//replace ? by 0 and recurse

		str[i]='1';  print(str,i+1);//replace ? by 1 and recurse
	}
	else{
		print(str,i+1);
	}

}
int main(){
	int t;cin>>t;
	string str ;cin>>str;
	print(str,0);
	return 0;
}