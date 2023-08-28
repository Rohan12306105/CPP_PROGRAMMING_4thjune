#include <iostream>
using namespace std;

int main(){

	int a[100][100],n,c,r,m,key;
	cout<<endl<<"enter num of row and col "<<endl;
	cin>>n>>m;
	int num=1;
	for(int r=0;r<n;r++){
		for(int c=0;c<m;c++){
			a[r][c]=num;
			num++;
		}
	}
	cout<<"enter key  ";
	cin>>key;
	for( r=0;r<n;++r){
		for( c=0;c<m;c++){
			if(a[r][c]==key){
				cout<<"key found at index  "<<r<<","<<c<<endl;
			}
		}
		if(c<m){
			break;
		}
	}
	if(r==n){
		cout<<"key not found";
	}
	return 0;
}
