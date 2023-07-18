#include<iostream>
using namespace std;

int main(){
    int n,i,no,row;
    cin>>n;
    row=1;
    no=1;
    while(row<=n){
        //print number row times
        i=1;
        while(i<=row){
            cout<<no<<" ";
            no=no+1;
            i=i+1;
        }
        row=row+1;
        cout<<"\n";
    }
    return 0;
}


