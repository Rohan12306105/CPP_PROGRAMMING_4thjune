#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[],int n){
    int maxi=arr[0];
    int sum=arr[0];
    for(int i=1;i<n;i++){
        sum +=arr[i];
        if(sum<arr[i]){
            sum=arr[i];
        }
		maxi=max(maxi,sum);
    }
    return maxi;
}
int maximum_circular(int arr[],int n){
    int x=kadane(arr,n);
    int y=0;
    for(int i=0;i<n;i++){
        y=y+arr[i];
        arr[i]=arr[i]*-1;
    }
    int z=kadane(arr,n);
    if(y+z==0){
        return x;

    }
    return max(x,y+z);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<maximum_circular(arr,n)<<endl;
    }
    return 0;
}