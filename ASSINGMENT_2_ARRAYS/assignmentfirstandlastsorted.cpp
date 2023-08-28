#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;     
    cin>>n;	
    cin>>x;
    int arr[n],i;
	for(i=0; i<n; i++)
        cin>>arr[i];
    int first = -1, last = -1;
	for (int i = 0; i < n; i++) {
		if (x != arr[i])
			continue;
		if (first == -1)
			first = i;
		last = i;
	}
	if (first != -1)
		cout << first<<" " << last;
	else
		cout << "-1 -1";
	return 0;
}
