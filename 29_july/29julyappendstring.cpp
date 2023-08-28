#include <iostream>
#include <cstring>
using namespace std;
void append(char*a,char*b){
    int i=0;
    int j=strlen(b);
    int len=strlen(a);
    while (i<=len){
        b[j]=a[i];
        j++;i++;
    }
}
int main() {
    char a[]="world";
    char b[]="hello";
    append(a,b);
    cout<<b;
	return 0;
}
