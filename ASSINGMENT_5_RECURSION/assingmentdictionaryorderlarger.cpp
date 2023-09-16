#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<string>ans;
void permutation(string s,int i){
	if(i==s.length()){
		ans.push_back(s);
		return;
	}
	for(int j=i;j<s.length();j++){
		swap(s[i],s[j]);
		permutation(s,i+1);
		swap(s[i],s[j]);
	}
}
int main(){
	string s;
	cin>>s;
	permutation(s,0);
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++){
		if(ans[i]>s){
			cout<<ans[i]<<endl;
		}
	}
	return 0;
}