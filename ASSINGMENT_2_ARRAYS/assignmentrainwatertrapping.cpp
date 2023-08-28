#include <bits/stdc++.h>
using namespace std;

// Function to return the maximum
// water that can be stored
int maxWater(int arr[], int n)
{
	// To store the maximum water
	// that can be stored
	int res = 0;

	// For every element of the array
	for (int i = 1; i < n - 1; i++) {

		// Find the maximum element on its left
		int left = arr[i];
		for (int j = 0; j < i; j++)
			left = max(left, arr[j]);

		// Find the maximum element on its right
		int right = arr[i];
		for (int j = i + 1; j < n; j++)
			right = max(right, arr[j]);

		// Update the maximum water
		res = res + (min(left, right) - arr[i]);
	}

	return res;
}

// Driver code
int main()
{
    int test_cases,i,n; 
    cin>>test_cases;
    for(i=0;i<test_cases;i++){
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        cout << maxWater(arr, n)<<endl;
    }
	

	return 0;
}











//////// alterante method


// #include<iostream>
// #include<climits>
// #include<cstring>
// #include<algorithm>
// using namespace std;
// int main ()
// {
//     int test;
//     cin>>test;
//     for (int t = 0; t < test; t++){
//         int n; cin>>n;
//         int arr[n];
//         for(int i=0; i<n; i++){
//             cin>>arr[i];
//         }
    
//         int vol =0;
//         for (int pos = 0; pos < n; pos++){
//             int maxl= INT_MIN;
//             for (int i = 0; i <= pos; i++){
//                 if(arr[i]>maxl){
//                     maxl=arr[i];
//                 }
//             }
//             int maxr= INT_MIN;
//             for (int i = pos; i < n; i++){
//                 if(arr[i]>maxr){
//                     maxr=arr[i];
//                 }
//             }
//             int mn;
//             if(maxl>maxr){
//                 mn=maxr;
//             }
//             else{
//                 mn=maxl;
//             }
//             vol += (mn-arr[pos]);
//         }    
//             cout<<vol<<endl;
        
//     }
    
    
    
//     return 0;
// }
    