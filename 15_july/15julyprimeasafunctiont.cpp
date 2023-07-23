#include<iostream>
using namespace std;

	bool checkprime(int n){
		int i;
		for(i=2;i<n;i++){
			if(n%i==0){
				break;
			}
		}
		if(i==n){
			return true;
		}
		else{
			return false;
		}
	}

	void printprimes(int n){
		for(int i=2;i<=n;i++){
			if(checkprime(i)==true){
				cout<<i<<" ";
			}			
		}
	}	

	int main(){
		int n=100;
		printprimes(n);
		return 0;
	}
	
