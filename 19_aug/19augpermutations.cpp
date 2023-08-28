#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

void permutations(char *a,int i){
    //base case
    if(a[i]=='\0'){
        cout<<a<<endl;
        return;
    }

    //reccursive case
    for (int  j = i; a[j]!='\0'; j++){
        swap(a[i],a[j]);
        permutations(a,i+1);
        //backtracking
        swap(a[i],a[j]);

    }
    
}


int main ()
{
    char a[]="abc";
    permutations(a,0);
    return 0;
}