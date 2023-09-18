#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    for(int i=0;i<s.length();i++){ 
        int count=1;
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j])
            {
                count++;
            }
            else{
                break;
            }
        }
		
        cout<<s[i]<<count;
        i=i+count-1;
    }
    return 0;
}