#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
void ReplacePi(char*a,int i,char*b,int j){
	if(a[i]=='\0'){
		b[j]='\0';
		cout<<b<<endl;
		return;
	}
	if(a[i]=='p' and a[i+1]=='i'){
		b[j]='3';
		b[j+1]='.';
		b[j+2]='1';
		b[j+3]='4';
		ReplacePi(a,i+2,b,j+4);
	}
	else{
		b[j]=a[i];
		ReplacePi(a,i+1,b,j+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		char a[100],b[100];
		cin>>a;
		ReplacePi(a,0,b,0);
	}
}