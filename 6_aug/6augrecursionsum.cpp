#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;
int sum(int n){
    //base case
    if (n==0){
        return 0;
    }
    //recursive case
    int chotiproblem = sum(n-1); //assumption
    int ans = n+chotiproblem;
    return ans;
}
int main ()
{
    int n;
    cout<<endl;
    cin>>n;
    cout<<endl<<sum(n)<<endl;
    return 0;
}
   