#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100],largest[100]="";
    int n;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++){
        cin.getline(a,100);
        if (strlen(a)>strlen(largest)) {
            strcpy(largest,a);
        }
    }
    cout<<endl<<largest<<endl;
	return 0;
}