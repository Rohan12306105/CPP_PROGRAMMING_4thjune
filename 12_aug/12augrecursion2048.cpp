#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

string s[]={
    "zero","one","two","three","four","five","six","seven","eight","nine"
};

void solve(int n){
    //base case
    if(n==0){
        return ;
    }
    //recursive case
    int ld=n%10;
    solve(n/10);
    cout<<s[ld]<<" ";
}


int main ()
{
    solve(2048);
    return 0;
}
  