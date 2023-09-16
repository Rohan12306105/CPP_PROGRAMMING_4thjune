#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> ans;

void subsets(int a[],int s,int n,vector<int> &output,int target){
	//base case
	if(target==0){
		ans.push_back(output);
		return ;
	}

	for(int i=s;i<n;i++){
		if(target>=a[i]){
			output.push_back(a[i]);
			subsets(a,i+1,n,output,target-a[i]);
			output.pop_back();
		}
	}
}

int main(){
	int a[20];
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int i=0,j=n-1;                               

	int target;
	cin >> target;
	vector<int> output;

	subsets(a,0,n,output,target);

	for(int i=0;i<ans.size();i++){
		for(int j=0;j<=ans[i].size()-1;j++){
			cout << ans[i][j] <<" ";
		}
		cout << " "; 
	}
	
	cout << endl << ans.size();
}