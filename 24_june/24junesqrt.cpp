#include<iostream>
using namespace std;
int main ()
{
    int n; float ans=1; float inc=1; int current_precision=1;
    cin>>n; cout<<endl;

    while (current_precision<=4)
    {
            while (ans*ans<=n)
            {
                ans=ans+inc;
            }
        ans=ans-inc;
        inc=inc/10;
        current_precision++;
    }
    cout<<ans<<endl;
    return 0;
}

