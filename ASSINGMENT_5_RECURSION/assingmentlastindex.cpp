#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

int lastindex(int input[], int size, int m, int currIndex){
    //base
    if(size==currIndex){
        return -1;
    }
    //recursive
    if(input[currIndex] == m){
        return currIndex;
    }
    return lastindex(input,size,m,currIndex-1);
    
}

int main(){
    int size;cin>>size;
    int input[100];
    for (int i = 0; i < size; i++)
    {
        cin>>input[i];
    }
    int m;cin>>m;
    cout<<lastindex(input,size,m,size-1);

    return 0;
}
