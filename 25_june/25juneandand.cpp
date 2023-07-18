#include<iostream>
using namespace std;
int main ()
{
    int a=0;
    int b=20;
    if(a++ && ++b) //false
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

