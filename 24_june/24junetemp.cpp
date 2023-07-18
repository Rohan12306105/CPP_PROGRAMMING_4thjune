#include<iostream>
using namespace std;

int main()
{
    int initial, final ,i,celsius,step;
    cout<<"enter initial ";
    cin>>initial;
    cout<<endl<<"enter final ";
    cin>>final;
    cout<<endl<<"enter step ";
    cin>>step;
    i=initial;
    while (i<=final)
    {
        celsius = (5/9.0)*(i-32);
        cout<<endl<<i<<"   "<<celsius<<endl;
        i=i+step;
    }
    cout<<endl;

    return 0;
}


