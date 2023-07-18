// C++ program to print number
// patterns using for loop
#include <iostream>
using namespace std;

int main()
{
	int rows, columns, n ;
    cin>>n;

	// second for loop is used to identify number of rows
	for (rows = 1; rows <= n; rows++) {
	
		// second for loop is used to identify number of
		// columns and here the values will be changed
		// according to the first for loop
		for (columns = 1; columns <= rows; columns++) {
		
			// print the number to be print based on the
			// number of columns
			cout << columns << " ";
		}
		// print the next line
		cout << "\n";
	}
	return 0;
}
