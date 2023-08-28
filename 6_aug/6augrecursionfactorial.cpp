#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;
int factorial(int n){
    if (n==0){
        return 1;
    }
    //recursive case
    int chotiproblem = factorial(n-1); //assumption
    int ans = n*chotiproblem;
    return ans;
}
int main ()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}
   