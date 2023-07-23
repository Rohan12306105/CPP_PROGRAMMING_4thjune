#include<iostream>
using namespace std;
void mergesortedarrays(int a[],int b[],int n,int m){
	int i=n-1; 
	int j=m-1; 
	int k=n+m-1;
	while(i>=0 and j>=0){
		if(a[i]>=b[j]){
			b[k]=a[i];
			k--;
			i--;
		}
		else{
			b[k--]=b[j--];
		}
	}
	while(i>=0){
		b[k--]=a[i--];
	}
}
void printarray(int a[6],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int a[]={0,1,4,6};
	int b[9]={3,5,7,8,9};
	int n=4;
	int m=5;
	mergesortedarrays(a,b,n,m);
	printarray(b,n+m);
	return 0;
}


