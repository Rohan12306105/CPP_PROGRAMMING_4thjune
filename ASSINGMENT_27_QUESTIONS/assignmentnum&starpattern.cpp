#include<iostream>
using namespace std;

int main(){
    int n,i,no,row;
    cin>>n;


    //print number row times
    row=1;
    while(row<=n){


    //num pattern
    i=1;
    no=1;
    while(i<=row){
        while(no<=row){
            cout<<no;
            no=no+1;
        }
    i=i+1;
    }


        //star pattern
    i=1;
    for(i=1;i<=n-row;i++){
        cout<<"*";
    }
    cout<<endl;
    row=row+1;
    cout<<"\n";
    }
    return 0;
}



