#include<iostream>
using namespace std;

int binarysearch(int a[],int n , int key){
	int start=0,end=n-1;
	while(start<=end){
		int median =(start+end)/2;
		if(a[median] == key){
			return median;
		}
		else if(key>a[median]){
			start=median+1;
		}
		else{
			end=median-1;
		}
	}
	return -1;
}
void printarray(int a[6],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(int);int key=3;
	printarray(a,n);
	cout<<endl<<"index:  "<<binarysearch(a,n,key);
	return 0;
}