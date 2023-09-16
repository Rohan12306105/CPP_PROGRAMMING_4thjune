#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

int xxx(int n){
    //base
    if(n<=1){
        return n;
    }
    //recursive 
    int num=n+xxx(n-1);
    return num;
    
}

int main (){
    int n;  cin>>n;
    cout<<xxx(n)<<endl;
}