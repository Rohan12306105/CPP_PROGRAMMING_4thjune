#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

int stringtoint(char *a, int n){
	//base case
	if(n==0){
		return 0;
	}
	//recursive case
	int ld=a[n-1]-'0';
	int chotanum=stringtoint(a,n-1);
	int badanum=chotanum*10+ld;
	return badanum;
	
	
}
int main ()
{
	char a[]="1234";
	int x =stringtoint(a,strlen(a));
	cout<<x*100+5<<endl;
    return 0;
}
  