#include <iostream>
#include <cstring>
using namespace std;

bool ispalindrome(char*a){
    int i=0,j= strlen(a)-1;
    while(i<j){
        if(a[i]!=a[j]){
            return false;
        }
        i++;j--;
    }
    return true;
}

int main() {
    char a[1000];
    cin.getline(a,1000);
	if(ispalindrome(a)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
    //cout<<ispalindrome(a)<<endl;
	return 0;
}