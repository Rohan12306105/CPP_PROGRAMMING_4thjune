#include<iostream>
using namespace std;
int main ()
{
    int a=1;
    int b=20;
    if(a++||++b)
    {
        ++a;
    }
    else
    {
        ++b;
    }
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}

