#include <iostream>
using namespace std;

int main(){

	
	// gereral work
	int a[100][100],n,r,c,m;
	cout<<endl<<"enter num of row and col "<<endl;
	cin>>n>>m;
	int num=1;
	for(r=0;r<n;r++){
		for(int c=0;c<m;c++){
			a[r][c]=num;
			num++;
		}
	}


	// print 2d
	cout<<endl;
	for(r=0;r<n;++r){
		for(int c=0;c<m;c++){
			cout<< a[r][c]<<" ";
		}
		cout<<endl;
	}


	// print wave
	cout<<endl;
	for(c=0;c<m;++c){
		if(c%2==0){
			for(r=0;r<n;++r){
			cout<< a[r][c]<<" ";
			}
		}
		else{
			for(r=n-1;r>=0;r--){
				cout<< a[r][c]<<" ";
			}
		}
	}
	cout<<endl;
	return 0;
}
