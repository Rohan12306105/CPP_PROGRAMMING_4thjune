#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

int multiply(int a, int b){
	//base case
	if(b==0){
		return 0;
	}
	//recursive case
	return a+multiply(a,b-1);
}
int main ()
{
	cout<<multiply(5,10)<<endl;
    return 0;
}
  