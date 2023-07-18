
#include<iostream>
using namespace std;
int main(){
	char ch;
	ch=cin.get();//cin>>ch;//replace cin>>ch with ch=cin.get()
	int count=0;
	while(ch!='\n'){
		//cout<<ch<<endl;//make this as a comment to display with white spaces 
		count++;
		ch=cin.get();
	}
	cout<<"no of characters"<<count<<endl;
	return 0;
}