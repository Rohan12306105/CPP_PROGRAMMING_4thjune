#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    if(s.length()==1){
        cout<<s;
        return 0; 
    } 

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
		if(count==1){
			cout<<s[i];
			i=i+count-1;
			continue;
		}
        cout<<s[i]<<count;
        i=i+count-1;
    }
    return 0;
}