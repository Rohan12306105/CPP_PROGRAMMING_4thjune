#include <iostream>
using namespace std;

int main(){

	
	// gereral work
	int a[100][100],n,r,c,num,m;
	cin>>n>>m;
	for(r=0;r<n;r++){
		for(int c=0;c<m;c++){
			cin>>num; a[r][c]=num;
		}
	}


	// // print 2d
	// cout<<endl;
	// for(r=0;r<n;++r){
	// 	for(int c=0;c<m;c++){
	// 		cout<< a[r][c]<<" ";
	// 	}
	// 	cout<<endl;
	// }


	// print wave
	cout<<endl;
	for(c=0;c<m;++c){
		if(c%2==0){
			for(r=0;r<n;++r){
			cout<< a[r][c]<<", ";
			}
		}
		else{
			for(r=n-1;r>=0;r--){
				cout<< a[r][c]<<", ";
			}
		}
	}
	cout<<"END";
	return 0;
}
