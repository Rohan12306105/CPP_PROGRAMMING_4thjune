#include <iostream>
using namespace std;

int main(){

	int a[100][100],n,m;
	cout<<endl<<"enter num of row and col "<<endl;
	cin>>n>>m;
	int num=1;
	for(int r=0;r<n;r++){
		for(int c=0;c<m;c++){
			a[r][c]=num;
			num++;
		}
	}
	for(int r=0;r<n;++r){
		for(int c=0;c<m;c++){
			cout<< a[r][c]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
