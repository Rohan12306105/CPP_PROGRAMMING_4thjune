#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int q;
	cin>>q;
	for(int query=0;query<q;query++) {
		int money,k;
		cin>>money>>k;
		int cnt=0;
		for (int i=0;i<n;i++){
			if(money%a[i]==0){
				cnt++;
			}
		}
		if (cnt>=k){
			cout<<"Yes"<<endl;;
		}
		else{
			cout<<"No"<<endl;;
		}
	}
	return 0;
}