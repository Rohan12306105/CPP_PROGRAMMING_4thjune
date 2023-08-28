#include <bits/stdc++.h>
using namespace std;
void findFirstAndLast(int arr[], int n, int target)
{
	int first = -1, last = -1;
	for(int i = 0; i < n; i++){
		if (target != arr[i]){
			continue;
		}
		if (first == -1){
			first = i;
		}	
		last = i;
	}
	if (first != -1){
		cout <<  first << " " << last;
	}		
	else{
		cout << "-1 -1";
	}
		
}

int main()
{
    int n,arr[n],i;
    cin>>n;
	for(i=0; i<n; i++){
        cin>>arr[i];
    }
	int target; cin>>target;
	findFirstAndLast(arr, n, target);
	return 0;
}

