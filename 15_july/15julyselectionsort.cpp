#include<iostream>
using namespace std;
int main ()
{
	int a[]={4,1,3,0,2};
	int n =sizeof(a)/sizeof(int);
	for (int pos=0;pos<=n-1;pos++){
		int min=pos;
		for(int i=pos+1;i<=n;++i){
				if (a[i]<a[min]){
					min=i;
				}
		}
			swap(a[pos],a[min]);	
	}
	for (int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}
    return 0;
}
    