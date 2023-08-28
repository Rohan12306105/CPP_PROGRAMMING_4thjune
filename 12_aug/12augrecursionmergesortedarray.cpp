#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

void merge(int *a,int *b,int *c,int s,int e){
	int m=(s+e)/2;
	int i=s,j=m+1,k=s;
	while(i<=m and j<=e){
		if(b[i]<c[j]){
			a[k]=b[i];
			k++;
			i++;
		}
		else{
			a[k++]=c[j++];

		}
	}
	while(j<=e){
		a[k++]=c[j++];
	}
	while(i<=m){
		a[k++]=b[i++];
	}
}


void mergesortedarray(int *a, int s,int e){
	//base case
	if(s>=e){
		return;
	}
	//recursive case
	//1.divide
	int b[10000];
	int c[10000];
	int m=(s+e)/2;
	for ( int i = s; i <= m; i++){
		b[i]=a[i];
	}
	for ( int i = m+1; i <= e; i++){
		c[i]=a[i];
	}
	//2.sort
	mergesortedarray(b,s,m);
	mergesortedarray(c,m+1,e);
	//3.merge
	merge(a,b,c,s,e);
	
	
}
int main ()
{
	int a[]={5,4,6,3,2,8,7,9,0,1};
	int n=sizeof(a)/sizeof(int);
	mergesortedarray(a,0,n-1);
	for (int i = 0; i < n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
    return 0;
}
  