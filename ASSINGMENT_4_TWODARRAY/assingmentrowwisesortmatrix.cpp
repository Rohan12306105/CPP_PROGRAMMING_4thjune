// C++ code to
// sort 2D matrix row-wise
#include<bits/stdc++.h>
using namespace std;

void sortRowWise(int m[100][100],
				int r, int c)
{
// loop for rows of matrix
for (int i = 0; i < r; i++)
{
	// loop for column of matrix
	for (int j = 0; j < c; j++)
	{
	// loop for comparison and swapping
	for (int k = 0; k < c - j - 1; k++)
	{
		if (m[i][k] > m[i][k + 1])
		{
		// swapping of elements
		swap(m[i][k], m[i][k + 1]);
		}
	}
	}
}

// printing the sorted matrix
for (int i = 0; i < r; i++)
{
	for (int j = 0; j < c; j++)
	cout << m[i][j] << " ";
	cout << endl;
}
}

// Driver code
int main()
{
	
	int m[100][100],n,r,c,num,x;
		cin>>n>>x;
		for(r=0;r<n;r++){
			for( c=0;c<x;c++){
				cin>>num; m[r][c]=num;
			}
		}
	
	sortRowWise(m, r, c);
	return 0;
}

