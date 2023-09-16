#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int cnt=0;
void path(int n,int m,char*a,int i,int j,int k){
	if(i==n-1 and j==m-1){
		a[k]='\0';
		cout<<a<<" ";
		cnt++;
		return;
	}
	if(i+1<n){
		a[k]='V';
		path(n,m,a,i+1,j,k+1);
	}
	if(j+1<m){
		a[k]='H';
		path(n,m,a,i,j+1,k+1);
	}
	a[k]='\0';
}
int main(){
	int n;
	cin>>n;
	int m;
	cin>>m;
	char a[100];
	path(n,m,a,0,0,0);
	cout<<endl<<cnt;
	return 0;

}