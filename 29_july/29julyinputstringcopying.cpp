#include <iostream>
#include <cstring>
using namespace std;

void copystring(char*a,char*b){
    int len = strlen(a);
    for(int i=0;i<=len;i++){
        b[i]=a[i];
    }
}

int main() {
    char a[100];
    char b[100];
    cin>> a;
    strcpy(b,a);
    cout<<endl<<a<<endl<<b<<endl;
	return 0;
}




