#include<iostream>
using namespace std;
int cnt=0;
void subsequence(int* in,int i,int t,int* out,int*ignore,int j,int n){
    //base case
    
    if(i==n){
		int first=0;
		for(int ind=0;ind<j;ind++){
			first+=out[ind];
		}
		int second=0;
		for(int ind=0;ind<t;ind++){
			second+=ignore[ind];
		}
		if(first==second){
			for(int ind=0;ind<j;ind++){
				cout<<out[ind]<<" ";
			}
			cout<<"and ";
			for(int ind=0;ind<t;ind++){
				cout<<ignore[ind]<<" ";
			}
			cout<<endl;
			cnt++;
		}
        
		return;
    }
    //recursive case
    
	out[j]=in[i];
    subsequence(in,i+1,t,out,ignore,j+1,n);
    
    ignore[t]=in[i];
    subsequence(in,i+1,t+1,out,ignore,j,n);
}
int main(){
    int a[100];
    int out[100];
	int ignore[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    subsequence(a,0,0,out,ignore,0,n);
	cout<<cnt<<endl;
    return 0;
}