#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;
long int converttoint(string s,int n){
    if(n==0){
        return 0;
    }
    long int lastdigit =s[n-1]-'0';
    return (converttoint(s,n-1)*10)+lastdigit;
}
bool iscbnumber(long int num){
    //first condition
    if(num==1||num==0){
        return false;
    }
    //second condition
    int a[]={2,3,5,7,11,13,17,19,23,29};
    for (int i = 0; i < 10; i++){
        if(num==a[i]){
            return true;
        }
    }
    //third condition
    for (int i = 0; i < 10; i++){
        if(num%a[i]==0){
            return false;
        }
    }
    return true;
}

bool isvalid(int *visited,int start,int end){
    //if any part of string is already part of cb number
    for (int i = start; i <= end; i++){
        if(visited[i]==1){
            return false;
        }
    }
    return true;
}
    

int main ()
{
    int n; cin>>n;
    string s; cin>>s;
    int visited[17]={0};  //making all positions non visited
    int ans=0;   //count of cb numbers
    for (int len = 1; len<=s.length(); len++){
        for (int j = 0; j+len-1<s.length(); j++){
            string str = s.substr(j,len);
            long int num = converttoint(str,len);
            if(iscbnumber(num)==true and isvalid(visited ,j,j+len-1)==true){
                ans++;
                for (int k = j; k <= j+len-1; k++){
                    visited[k]=1;
                }
            }
        }  
    }
    cout<<ans<<endl;
    return 0;
}