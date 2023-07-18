
#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;//replace cin>>ch with ch=cin.get()
	int count=0;
	while(ch!='$'){
		cout<<ch<<endl;//make this as a comment to display with white spaces 
		count++;
		cin>>ch;
	}
	cout<<"no of characters"<<count<<endl;
	return 0;
}