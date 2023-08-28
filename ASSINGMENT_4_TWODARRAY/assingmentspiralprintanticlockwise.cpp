#include<bits/stdc++.h>
using namespace std;

void spiral_print (int a[][1000] , int m, int n ) // need array, row and column
{

    int startRow = 0;
    int startCol = 0;
    int endRow = m - 1;
    int endCol = n - 1;

    while (startRow <= endRow && startCol <= endCol)
    {
        // Print the First Column

        for (int i = startRow; i <= endRow; i++)
        {

            cout << a[i][startCol] << ", ";

        }

        startCol ++ ;   // for next iteration... we have updated the columns


        // now print the last row

        for (int i = startCol; i <= endCol; i++)
        {

            cout << a[endRow][i] << ", ";

        }

        endRow-- ;

        // now print the last column

        if (endCol >= startCol)                  // this condition for all MATRIX

        {

            for (int i = endRow; i >= startRow; i--)
            {

                cout << a[i][endCol] << ", ";

            }

            endCol-- ;

            // now print the first row


        }


        if (endRow >= startRow)                // this condition for all MATRIX
        {


            for (int i = endCol; i >= startCol; i--)
            {

                cout << a[startRow][i] << ", ";

            }

            startRow++;


        }

    }
}

int main()
{

    int a[1000][1000];
    int m, n;
// cout << "Enter the number of rows : ";
    cin >> m;

// cout << "Enter the number of columns : ";
    cin >> n;

    for (int row = 0; row <= m - 1; row++)
    {

        for (int col = 0; col <= n - 1; col++)
        {

            cin >> a[row][col];

        }

        cout << endl;

    }

    cout << endl;


    spiral_print (a, m, n);

    cout << "END";


    return 0;
}