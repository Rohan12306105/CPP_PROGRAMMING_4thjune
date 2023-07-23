#include<iostream>
using namespace std;

void printcel_far(int initial,int final,int step){
	int i=initial,celsius;
    while (i<=final)	
    {
        celsius = (5/9.0)*(i-32);
        cout<<endl<<i<<"   "<<celsius<<endl;
        i=i+step;
    }
    cout<<endl;

    
}
int main (){
	int initial, final ,i,celsius,step;
    cout<<"\nenter initial ";
    cin>>initial;
    cout<<endl<<"enter final ";
    cin>>final;
    cout<<endl<<"enter step ";
    cin>>step;
	printcel_far(initial,final,step);
	return 0;
}