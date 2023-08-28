#include<iostream>
using namespace std;
int main ()
{
    int n,arr[n],i,sum=0;
    cin>>n;
	for(i=0; i<n; i++){
        cin>>arr[i];
    }
    for(i=0; i<n; i++){
        sum += arr[i];
        cout<<sum<<" ";
    }
    return 0;
}