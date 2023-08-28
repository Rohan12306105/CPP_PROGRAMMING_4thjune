#include <iostream>
using namespace std;
int main() {
// to make an array 
	int n,i;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
// to sort array
	n = sizeof(a) / sizeof(int);
	for (int i=0;i<=n-1;i++){
		for(int j=0;j<=n-1;++j){
				if (a[j]>a[j+1]){
					swap(a[j],a[j+1]);
				}
		}
				
	}
// to find triplets
	int target;
	cin>>target;
	for (int i = 0; i < n - 2; ++i)
	{
		for (int j = i + 1; j < n - 1; ++j)
		{
			for (int k = j + 1; k < n; ++k)
			{
				if (a[i] + a[j] + a[k] == target) {
					cout << a[i] << ", " << a[j] << " and " << a[k] << endl;
				}
			}
		}
	}
	return 0;
}
