#include<iostream>
using namespace std;
int main ()
{
    int n,col,row;
    // 1st row
    //cin>>n;
    n=15;
    for(col=1;col<=n;++col){

        if(col==1||col>n/2){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;



    //row 1,(n-3)/2
    for(row=1;row<=(n-3)/2;++row){

        for(col=1;col<=(n+1)/2;++col){

            if(col==1||col==(n+1)/2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
         cout<<endl;
    }



    for(col=1;col<=n;col++){

        cout<<"*";
    }
    cout<<endl;



    for(row=1;row<=(n-3)/2;row++){

        for(col=1;col<=n;col++){

            if(col==(n+1)/2||col==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }



    for(col=1;col<=n;col++){

        if(col<=(n+1)/2||col==n){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
    
}