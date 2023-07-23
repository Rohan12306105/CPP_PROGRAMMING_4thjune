#include<iostream>
using namespace std;
void printarray(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<" ";
	}
}
void bubblesort(int *a,int n){
	for (int i=0;i<n;i++){
		for(int j=0;j<n-1;++j){
				if (*(a+j)>*(a+j+1)){
					swap(*(a+j),*(a+j+1));
				}
		}
				
	}
}
int main(){
	int a[]={5,3,7,8,9};
	int n=sizeof(a)/sizeof(int);
	//array ka size 4X5=20 //int ka size = 4
	bubblesort(a,n);
	printarray(a,n);
	return 0;
}
