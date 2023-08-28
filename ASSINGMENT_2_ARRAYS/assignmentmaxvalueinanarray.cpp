#include<iostream>
using namespace std;
int main()
{
    int arr[100], tot, larg, i;
   // cout<<"Enter the Size (max. 100): ";
    cin>>tot;
   // cout<<tot;
    for(i=0; i<tot; i++)
        cin>>arr[i];
    larg = arr[0];
    for(i=1; i<tot; i++)
    {
        if(larg<arr[i])
            larg = arr[i];
    }
    cout<<larg;
    cout<<endl;
    return 0;
}