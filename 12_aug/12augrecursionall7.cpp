#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

void all7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return;
	}

	// recursive case
	if (a[i] == 7) {
		cout << i << " ";
	}
	all7(a, n, i + 1);
}

int main (){
    int a[]={1,2,3,4,5,6,7,8,9,7,9,7};
    int n=sizeof(a)/sizeof(int);
    all7(a,n,0);
    cout<<endl;
}
  