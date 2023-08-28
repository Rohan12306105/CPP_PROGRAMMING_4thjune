#include <iostream>
using namespace std;
void pairs(int a[],int N,int target){
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(a[i]+a[j]==target){
                if(a[j]>a[i]){
                    cout<<a[i]<<" and "<<a[j]<<endl;
                }
                else{cout<<a[j]<<" and "<<a[i]<<endl;}
                
            }
        }
    }
}
int main(){
    int N;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;
    pairs(a,N,target);
    return 0;
}