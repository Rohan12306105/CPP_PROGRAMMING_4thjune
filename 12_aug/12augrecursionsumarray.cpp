#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

int sum(int *a,int n,int i){
    //base case
    if (i==n){
        return 0;
    }
    //recursive case
    return a[i]+sum(a,n,i+1);
    
}


int main ()
{
    int n;
    cin>>n;cout<<endl;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<endl<<sum(a,n,0)<<endl;
    return 0;
}
  