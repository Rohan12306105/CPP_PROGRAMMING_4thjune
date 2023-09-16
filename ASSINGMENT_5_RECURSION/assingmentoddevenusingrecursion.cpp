#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;


void even (int e, int n){
    //base
    if(e>n){
        return;
    }
    //recursive
    else{
        cout<<e<<endl;
        even(e+2,n); 
    }
    
}

void odd(int n){
    //base
    if(n<=0){
        return;
    }
    else{
        cout<<n<<endl;
        odd(n-2);
    }
}


int main() {
    int n;
    cin>>n;
    if(n&1){
        odd(n);
        even(2,n-1);
    }
    else{ 
        odd(n-1);even(2,n);
    }
    return 0;
}