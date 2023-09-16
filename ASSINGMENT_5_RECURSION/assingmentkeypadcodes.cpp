#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int cnt=0;
char keys[100][100]={
    "",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wx",
    "yz"
};
void phone_key_pad(char* in, int i,char* out,int j){
    //base case
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<" ";  
		cnt++;
        return;
    }
    //recursive case
    int d=in[i]-'0';
    for (int  k = 0; keys[d][k] !='\0'; k++){
        out[j]=keys[d][k];
        phone_key_pad(in,i+1,out,j+1);
        
    }
}
int main ()
{
    char in[10000],out[100];    
    cin>>in;
    phone_key_pad(in,0,out,0);
	
	cout<<endl<<cnt;
    return 0;
}