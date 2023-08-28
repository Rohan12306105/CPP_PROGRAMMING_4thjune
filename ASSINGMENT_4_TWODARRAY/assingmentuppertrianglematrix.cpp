
// C++ program to print Lower
// triangular and Upper triangular
// matrix of an array
#include<iostream>

using namespace std;

// Function to form
// lower triangular matrix
void lower(int matrix[100][100], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i < j)
			{
				cout << "0" << " ";
			}
			else
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

// Function to form upper triangular matrix
void upper(int matrix[100][100], int row, int col)
{
	int i, j;
	
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i > j)
			{
				cout << "0" << " ";
			}
			else
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

// Driver Code
int main()
{
	int matrix[100][100],r,c,num;
	int row , col,X ;
	cin>>X;
	row=X;
	col=X;
	for(r=0;r<X;r++){
		for(c=0;c<X;c++){
			cin>>num; matrix[r][c]=num;
		}
	}
	
	
	
	// cout << "Lower triangular matrix: \n";
	// lower(matrix, row, col);
	
	//cout << "Upper triangular matrix: \n";
	upper(matrix, row, col);
		
	return 0;
}