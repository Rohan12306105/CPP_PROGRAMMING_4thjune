#include<iostream>
using namespace std;
int main ()
{
    int a=-2;
    int b=20;
    if(a++ && ++b) //true
    {
        ++b;
    }
    else
    {
        ++a;
    }
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}

