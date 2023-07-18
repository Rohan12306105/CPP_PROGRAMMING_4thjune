#include<iostream>
using namespace std;
int main ()
{
    int ld,n;
    cin>>n;
            while (n>0)
            {
                ld=n%10;
                cout<<ld;
                n/=10;
            }
   cout<<endl;
    return 0;
}

