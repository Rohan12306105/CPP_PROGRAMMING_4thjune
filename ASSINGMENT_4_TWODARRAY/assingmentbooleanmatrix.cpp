#include<iostream>
using namespace std;

int main () {
	int n,m;
	cin>>n>>m;
	int a[1000][1000];
	for(int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	int mat[1000][1000]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==1){
				for(int col=0;col<m;col++){
					mat[i][col]=1;
				}
				for(int row=0;row<n;row++){
					mat[row][j]=1;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}