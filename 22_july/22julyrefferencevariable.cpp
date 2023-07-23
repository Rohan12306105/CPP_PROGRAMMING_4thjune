#include<iostream>
using namespace std;
void update(int &x){
	x=x+1;
}
int main(){
	int n=5;
	cout<<"before updating  "<<n<<endl;
	update(n);
	cout<<"after updating  "<<n<<endl;
	return 0;
}
