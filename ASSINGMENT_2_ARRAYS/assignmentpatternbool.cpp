#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

bool solve(int *a,int n){
    for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k <n; k++) {
				if (a[i] < a[k] && a[k] < a[j]){
                    return true;
                }	
			}
		}
	}
    return false;
}
int main ()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<solve(a,n);
    return 0;
}