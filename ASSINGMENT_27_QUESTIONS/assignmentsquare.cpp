
#include <iostream>
using namespace std;

int main()
{
	int rows, j,i,no, n ;
    cin>>n;
    //n=5;
	
	for (rows = 1; rows <= n; rows++) {
		
		for(i=1;i<=rows;i++){
			cout<<rows<<" ";
			//i++;
		}
		no=rows+1;
		for (j=1;j<=n-rows;j++){
			cout<<no<<" ";
			++no;
		}
		cout << "\n";
	}
	return 0;
}
