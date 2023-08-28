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

	// print wave
	for(r=0;r<n;++r){ // yaha n hoga  ki jgh
		if(r%2==0){
			for(c=0;c<m;++c){ // yaha bhi m hoga n ki jgh
				cout<< a[r][c]<<", ";
			}
		}
		else{
			for(c=m-1;c>=0;c--){
				cout<< a[r][c]<<", ";
			}
		}
	}
	cout<<"END";
	return 0;
}