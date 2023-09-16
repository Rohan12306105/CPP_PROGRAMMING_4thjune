#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

void twins(string str,int i,int n,int j,int cnt){
	if(i==n-2){
		cout<<cnt;
		return ;
	}
	if(str[i]==str[j]){
		twins(str,i+1,n,j+1,cnt+1);
	}
	else{
		twins(str,i+1,n,j+1,cnt);
	}

}
int main() {
	string str;
	cin>>str;
	twins(str,0,str.length(),2,0);
	return 0;
}