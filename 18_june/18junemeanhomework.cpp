#include<iostream>
#include<climits>

using namespace std;

int main()
{
    int n ,no, sum ,avg,l,x, i;
    i=1;
    sum=0;
    l=INT_MIN;
    x=INT_MAX,
    cout<<"the amount of numbers :"<<endl;
    cin>>n;
    cout<<endl;
    while(i<=n)
    {
        cin>>no;
        sum=sum+no;
        i=i+1;
        if (no>l)
            {
                l=no;
        }
        if (no<x)
        {
            x=no;
        }
    }

    cout<<endl<<"largest:"<<l<<endl;
    cout<<endl<<"shortest:"<<x<<endl;
    avg=sum/n;
    cout<<endl<<"the average is :"<<avg<<endl;
    return 0;
}


