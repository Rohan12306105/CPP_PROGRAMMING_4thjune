#include <iostream>
using namespace std;
int main()
{
    int i,x,n;
    cin>>n;
    for(i=1;i<=n;i++){
            if(i==1){
                cout<<"1";
            }
            if(i>1){
                cout<<i-1;
                for (x=1;x<=i-2;x++){
                    cout<<"0";
                }
                cout<<i-1;
            }
            cout<<endl;
    }   
        
}