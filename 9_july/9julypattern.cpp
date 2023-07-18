#include<iostream>
using namespace std;
int main() {
    int row,n,i;
    cin>>n;
    for(row=1;row<=n;++row){
        for(i=0;i<row;i++){
            cout<<"*";
        }
        cout<<" ";
        for(i=0;i<n-row+1;i++){
            cout<<"*";
        }
        cout<<" ";
        for(i=0;i<n-row+1;i++){
            cout<<"*";
        }
        cout<<" ";
        for(i=0;i<row;i++){
            cout<<"*";
        }
        cout<<endl;
    }
	return 0;
}

