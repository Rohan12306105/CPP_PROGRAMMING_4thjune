#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<algorithm>
#include<cstring>
using namespace std;

bool ispalindrome(string s,int st,int en){
    while(st<en){
        if(s[st]!=s[en]){
            return false;
        }
        st++;en--;
    }
    return true;
}

int main() {
    string s;
    cin>>s;
    int ans=0;
    for (int len = 1; len <= s.length(); len++){
        for (int i = 0; i+len-1 < s.length(); i++){
            if(ispalindrome(s,i,i+len-1)){
                ans++;
            }
        }    
    }
    cout<<ans<<endl;        
	return 0;
}