#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

int first7(int *a,int n,int i){
    //base case
    if(i==n){
        return -1;
    }
    //recursive case
    if(a[i]==7){
        return i;
    }

    return first7(a,n,i+1);
}


int main (){
    int a[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(int);
    //int i;
    cout<<"7 is present at index :"<<first7(a,n,0);

}
  