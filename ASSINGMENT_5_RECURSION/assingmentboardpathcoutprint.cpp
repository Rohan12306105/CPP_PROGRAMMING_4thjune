#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

int nStairs1(int n,int k,int*out,int j){
	//base case
	if(n==0){
		for(int t=0;t<j;t++){
			cout<<out[t];
		}
		cout<<" ";
		return 1;
		
	}
	if(n<0){
		return 0;
	}
	//recursive case
	int ans=0;
	for(int i=1;i<=k;i++){
		out[j]=i;
		ans+=nStairs1(n-i,k,out,j+1);
	}
	return ans;
}
int main(){
	int n,k;
	cin>>n>>k;
	int out[1000];
	int ans=nStairs1(n,k,out,0);
	cout<<endl<<ans<<endl;
	//cout<<nStairs(n)<<endl;
}