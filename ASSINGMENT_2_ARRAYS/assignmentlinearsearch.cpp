#include <iostream>
using namespace std;

int main() {

	
	

	int arr[100],tot,i,key ;
 
    cin>>tot;
   
	for(i=0; i<tot; i++)
        cin>>arr[i];

	int n = sizeof(arr) / sizeof(int);
	
	cin>>key;

	for ( i = 0; i < n; ++i)
	{
		if (arr[i] == key) {
			cout << i << endl;
			break;
		}
	}

	if (i == n) {
		cout << "-1";
	}


	return 0;
}