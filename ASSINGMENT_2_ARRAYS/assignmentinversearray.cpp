#include <iostream>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int b[n];
	for(i=0;i<n;i++){
		int temp=a[i];
		b[temp]=i;
	}
	for(i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}