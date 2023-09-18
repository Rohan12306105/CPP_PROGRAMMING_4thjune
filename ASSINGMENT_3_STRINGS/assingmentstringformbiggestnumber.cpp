#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

bool solve(string a,string b){
    string ab=a+b;
    string ba=b+a;
    if(ab>ba){
        return true;
    }
    else{
        return false;
    }
}
int main ()
{
    int test;cin>>test;
    for (int  t = 0; t < test; t++){
        int n;
        cin>>n;
        string a[n];
        for(int i=0; i<n; i++){
		cin>>a[i];
	    }
        sort(a,a+n,solve);
        for (int i = 0; i < n; i++){
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
    