#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

bool check7(int *a,int n,int i){
    //base case
    if(i==n){
        return false;
    }
    //recursive case
    if(a[i]==7){
        return true;
    }

    return check7(a,n,i+1);
}


int main (){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    //int i;
    cout<<check7(a,n,0);

}
  