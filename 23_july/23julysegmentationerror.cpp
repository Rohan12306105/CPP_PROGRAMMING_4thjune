#include<iostream>
using namespace std;


int main ()
{
	int a=10;
	int *p=NULL, *x=NULL;
//due to a null an segementation error will come but vs code doesnt support it

	//p=&a;
	if(*p>10){
		cout<<"bhaago"<<endl;
	}
	else{
		cout<<"ruko"<<endl;
	}
    return 0;
}
    
