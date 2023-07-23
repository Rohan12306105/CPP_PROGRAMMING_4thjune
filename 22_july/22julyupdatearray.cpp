#include<iostream>
using namespace std;
void printarray(int a[6],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
void updatearray(int a[],int n){
	for(int i=0;i<n;i++){
		a[i]*=a[i];
	}
}
int main(){
	int a[6]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(int);
	//array ka size 4X5=20 //int ka size = 4
	updatearray(a,n);
	printarray(a,n);
	return 0;
}
