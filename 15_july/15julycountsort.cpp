#include<iostream>
using namespace std;
int main ()
{
	int a[]={4,1,3,0,2};
	int n =sizeof(a)/sizeof(int);
	for (int i=0;i<=n-1;i++){
		int count =0;
		for(int j=0;j<=n-1;++j){
				if (a[j]>a[j+1]){
					count++;
					swap(a[j],a[j+1]);
				}
		}
		if (count==0){
			break;
		}	
	}
	for (int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}
    return 0;
}
    