#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

int last7(int *a,int n){
    //base case
    if(n==0){
        return -1;
    }
    //recursive case
    if(a[n-1]==7){
        return n-2;
    }
    int ans=last7(a,n-1);
    return ans;
}


int main (){
    int a[]={1,2,3,4,5,6,7,8,9,7,9,7};
    int n=sizeof(a)/sizeof(int);
    //int i;
    cout<<"7 is present at index :"<<last7(a,n);

}
  