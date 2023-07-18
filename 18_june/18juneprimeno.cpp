#include<iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    i=2;
    if(n==2)
    {
        cout<<"prime";
        return 0;
    }
    while (i<=n-1)
    {
        if(n%i==0)
        {
            cout<<"not prime";
            return 0;
        }
        i=i+1;
        cout<<"prime";
        return 0;
    }

}


