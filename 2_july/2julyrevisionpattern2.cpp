#include<iostream>
using namespace std;
int main() {
    int no,n;
    //cin>>n;
    n=3;no=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           // no=1;
            cout<<no ;
            no++;
        }
        for(int j=1;j<=(n-i)*2;j++){
            cout<<" ";        
        }
        for(int j=1;j<=i;j++){
           --no; 
           cout<<no ;
            
        }
        cout<<endl;
    }
	return 0;
}
