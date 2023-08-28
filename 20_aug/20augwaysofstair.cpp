#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

int nstairs(int n){
    //basecase
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    //recursive case
    return nstairs(n-1)+nstairs(n-2)+nstairs(n-3);
}
int main ()
{
    cout<<nstairs(6)<<endl;
    cout<<nstairs(5)<<endl;
    cout<<nstairs(4)<<endl;
    cout<<nstairs(3)<<endl;
    cout<<nstairs(2)<<endl;
    cout<<nstairs(1)<<endl;
    cout<<nstairs(0)<<endl;

    return 0;
}