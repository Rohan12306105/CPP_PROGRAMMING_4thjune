#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
	int test;
	cin>>test;
	for ( int t = 0; t < test; t++){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int target;
		int min_dif = INT_MAX;
		cin>>target;
		int rose1,rose2;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]+a[j]==target){
					
					int curr_dif = a[i]-a[j];
					if(curr_dif<0){
						curr_dif*=-1;
					}
					if(curr_dif<min_dif){
						min_dif=curr_dif;
						rose1=a[i];
						rose2=a[j];
					}
				}
			}
		}
		if(rose1<rose2){
			cout<<"Deepak should buy roses whose prices are "<<rose1<<" and "<<rose2<<"."<<endl;
		}
		else{
			cout<<"Deepak should buy roses whose prices are "<<rose2<<" and "<<rose1<<"."<<endl;
		}
		
	}
    return 0;
}