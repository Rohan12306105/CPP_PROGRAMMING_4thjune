#include<iostream>
using namespace std;
int main ()
{
	int a[]={4,1,3,0,2};
	int n =sizeof(a)/sizeof(int);
	for(int j=1;j<=n-1;++j){
		int i=j-1;
		int handpickedcard=a[j];
		while(i>=0 and handpickedcard<a[i]){
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=handpickedcard;
	}
	for (int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}
    return 0;
}
    