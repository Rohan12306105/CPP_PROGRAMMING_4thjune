#include <iostream>
using namespace std;
void inputstring(char*a,char delimiter){
    int i=0;
    char ch=cin.get();
    while(ch!=delimiter){
        a[i]=ch;
        i++;
        ch=cin.get();
    }
    a[i]='\0';
}

int main() {
    char a[100];
    inputstring(a,'$');
    cout<<a<<endl;
	return 0;
}





// int main() {
//     char a[100];
//     int i=0;
//     char ch=cin.get();
//     while(ch!='$'){
//         a[i]=ch;
//         i++;
//         ch=cin.get();
//     }
//     a[i]='\0';
//     cout<<a<<endl;
// 	return 0;
// }