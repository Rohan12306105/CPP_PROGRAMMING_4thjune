#include <iostream>
using namespace std;
long long int product(long long int n){
    long long int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }long long int sum=1;
    for(int i=0; i<n; i++){
        long long int prod=1;
        for(int j=0; j<n; j++){
            prod=prod*arr[j];
        }sum=prod/arr[i];
        cout<<sum<<" ";
        
    }return sum;
 }
int main()
{
    int n;
    cin>>n;
    long long int ans=product(n);
return 0;
}