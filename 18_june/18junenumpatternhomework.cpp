#include<iostream>
using namespace std;

int main()
{
    int n , row,s ,i,no;
    cout<<endl;
    cout<<"enter n :"<<endl;
    cin>>n;
    cout<<endl;

    row=1;
    while(row<=n)
    {


            // printing spaces
            s=1;
            while(s<=n-row)
        {       cout<<" ";
                s=s+1;
        }


            //increasing number
            i=1;
            no=row;
            while(i<=row)
        {
            cout<<no;
            i=i+1;
            no=no+1;
        }


            //decreasing number
            i=1;
            no=2*row-2;
            while(i<=row-1)
        {
            cout<<no;
            i=i+1;
            no=no-1;
        }
            cout<<endl;
            row = row+1;

    }
    return 0;
}


