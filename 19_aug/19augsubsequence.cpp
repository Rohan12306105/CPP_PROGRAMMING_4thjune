#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;
void subsequence(char *in,int i,char *out,int j){
    //base case
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    //recursive case
    //1.ith charcter ko mat lo
    subsequence(in,i+1,out,j);
    //2.ith character ko lelo
    out[j]=in[i];
    subsequence(in,i+1,out,j+1);
}
int main ()
{
    char a[]="abc";
    char out[100];
    subsequence(a,0,out,0);
    return 0;
}