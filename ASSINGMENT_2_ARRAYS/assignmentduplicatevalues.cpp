#include <iostream>
using namespace std;
bool checkDuplicates(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		for(int j = i + 1;j<n;j++){
			if (arr[i] == arr[j]){
				return true;
				break;
			}
		}
	}
	return 0;
}
int main()
{
	int n,i;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if (checkDuplicates(arr, n))
		cout << "true";
	else
		cout << "false";
}







