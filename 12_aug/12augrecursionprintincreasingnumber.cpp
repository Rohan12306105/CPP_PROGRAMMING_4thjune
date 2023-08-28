#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

int increasing
(int n){
    //base case
    if (n==0){
        return 0;
    }
    //recursive case
    else{
        
        increasing(n-1);
        cout<<n<<" ";
    }
    return 0;
}


int main ()
{
    int n;
    n=10;
    increasing
    (n);
    return 0;
}
  