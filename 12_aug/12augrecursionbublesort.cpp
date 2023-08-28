#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

void bublesort(int *a, int n,int i){
	//base case
	if(i==n-1){
		return ;
	}
	//recursive case
	for (int j = 0; j < n-1; j++){
		if(a[j]>a[j+1]){
			swap(a[j],a[j+1]);
		}
	}
	bublesort(a,n,i+1);
	
}
int main ()
{
	int a[]={8,4,5,2};
	int n =sizeof(a)/sizeof(int);
	bublesort(a,n,0);
	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
    return 0;
}
  