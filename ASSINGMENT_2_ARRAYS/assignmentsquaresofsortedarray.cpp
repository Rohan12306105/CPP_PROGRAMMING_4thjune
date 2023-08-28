#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int size=n;
    int a[size];
    for (int i=0;i<size;i++){
        cin>>a[i];
    }
    int b[size];
    for(int i=0;i<size;i++){
        b[i]=a[i]*a[i];
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(b[j]>b[j+1]){
                swap(b[j],b[j+1]);
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}