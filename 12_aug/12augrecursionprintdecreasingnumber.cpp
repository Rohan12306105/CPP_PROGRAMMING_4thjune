#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

int decreasing(int n){
    //base case
    if (n==0){
        return 0;
    }
    //recursive case
    else{
        cout<<n<<" ";
        decreasing(n-1);
    }
    return 0;
}


int main ()
{
    int n;
    n=10;
    decreasing(n);
    return 0;
}
  