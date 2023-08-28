#include<iostream>
using namespace std;
bool upper(int a[][100],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i][j]!=0){
				return false;
			}	
		}
	}
	return true;
}
int main () {
	int a[100][100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	if (upper(a,n)==true){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	return 0;
}