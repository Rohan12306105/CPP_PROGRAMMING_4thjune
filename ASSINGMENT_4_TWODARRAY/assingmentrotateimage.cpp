
#include <bits/stdc++.h>
using namespace std;

// gereral work
int main(){
	int mat[100][100],N,n,r,c,num,m;
	cin>>N;
	n=m=N;
	for(r=0;r<n;r++){
		for(int c=0;c<m;c++){
			cin>>num; mat[r][c]=num;
		}
	}

	// Consider all squares one by one
	for (int x = 0; x < N / 2; x++) {
		// Consider elements in group
		// of 4 in current square
		for (int y = x; y < N - x - 1; y++) {
			// Store current cell in
			// temp variable
			int temp = mat[x][y];

			// Move values from right to top
			mat[x][y] = mat[y][N - 1 - x];

			// Move values from bottom to right
			mat[y][N - 1 - x] = mat[N - 1 - x][N - 1 - y];

			// Move values from left to bottom
			mat[N - 1 - x][N - 1 - y] = mat[N - 1 - y][x];

			// Assign temp to left
			mat[N - 1 - y][x] = temp;
		}
	}


	// print 2d
	cout<<endl;
	for(r=0;r<n;++r){
		for(int c=0;c<m;c++){
			cout<< mat[r][c]<<" ";
		}
		cout<<endl;
	}
}
