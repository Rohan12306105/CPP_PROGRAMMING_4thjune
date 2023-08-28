#include <iostream>
using namespace std;

int main() {

	//int a[5] = {1, 2, 3, 4, 5};
	

	int arr[100],tot,i,key ;
   // cout<<"Enter the Size (max. 100): ";
    cin>>tot;
    //cout<<"Enter "<<tot<<" Array Elements: ";
	for(i=0; i<tot; i++)
        cin>>arr[i];

	int n = sizeof(arr) / sizeof(int);
	//int key , i;
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