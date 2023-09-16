#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;




int cnt=0;
void replace_hi_with_nothing(char*a,int i,char*b,int j){
	//base case
	if(a[i]=='\0'){
		b[j]='\0';
		cout<<cnt<<endl;
		cout<<b<<endl;
		return;
	}
	//recursive
	if(a[i]=='h' and a[i+1]=='i' and a[i+2]!='t'){
		cnt++;
		replace_hi_with_nothing(a,i+2,b,j);
	}
	else{
		b[j]=a[i];
		replace_hi_with_nothing(a,i+1,b,j+1);
	}
}
void replace_hi_with_bye(char*a,int i,char*b,int j){
	//base case
	if(a[i]=='\0'){
		b[j]='\0';
		cout<<b<<endl;
		return;
	}
	//recursive
	if(a[i]=='h' and a[i+1]=='i' and a[i+2]!='t'){
		b[j]='b';
		b[j+1]='y';
		b[j+2]='e';
		replace_hi_with_bye(a,i+2,b,j+3);
	}
	else{
		b[j]=a[i];
		replace_hi_with_bye(a,i+1,b,j+1);
	}
}
int main(){
	char a[1000],b[1000];
	cin>>a;
	replace_hi_with_nothing(a,0,b,0);
	replace_hi_with_bye(a,0,b,0);
}