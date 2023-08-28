#include <iostream>
#include<climits>
#include <cstring>
using namespace std;

void rotate(char*a,int n){
    int len=strlen(a);
    //sabhi ko n position aage bhejo
    for(int i=len-1;i>=0;--i){
        a[i+n]=a[i];
    }
    //last ki n buckets ko shuru mai lekar aao
    int j=len;
    for(int i=0;i<n;i++){
        a[i]=a[j];
        j++;
    }
    //a[len] par '\0' add kardo
    a[len]='\0';
}
int main() {
    char a[100]="Coding";
    int n; n%=strlen(a);
    cout<<endl;
    cin>>n;
    rotate(a,n);
    cout<<endl<<a<<endl;
	return 0;
}
