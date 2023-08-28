#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

int poweur(int x,int n){
    //base case
    if(n==0){
        return 1;
    }
    //recursive case
    return x*poweur(x,n-1) ;
}


int main ()
{
    cout<<poweur(2,4);
}
  