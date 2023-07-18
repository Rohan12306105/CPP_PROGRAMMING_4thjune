#include<iostream>
using namespace std;
int main()
{
     int c,r,n,x;
     cin>>n;
     for (r=1;r<=n;r++){
          for (c=1;c<=r;c++){
               if(c==1||c==r){
                    cout<<1;
               }
               else{
                    if(r%2==0){
                         x=0;
                    }
                    else{
                         x=1;
                    }
                    cout<<x;
               }
          }
          cout<<endl;
     }
}