#include<iostream>
using namespace std;

int main()
{
    char i;
    cout<<"Press any key on keyboard and hit EnTeR "<<endl;cin>>i;
    int asciicode=i;
    if(asciicode>=65 && asciicode <=90)
    {
        cout<<"UPPERCASE ALPHABET\n";
    }
    else if (asciicode>=97&&asciicode<=122)
    {
        cout<<"LOWERCASE ALPAHABET\n";
    }
    else
    {
        cout<<"NOT AN ALPHABET\n";
    }
    return 0;
}


