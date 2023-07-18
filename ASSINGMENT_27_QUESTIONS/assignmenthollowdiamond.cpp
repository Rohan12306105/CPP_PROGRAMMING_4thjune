// C++ program to print hollow diamond pattern
#include <iostream>
using namespace std;

int main()
{
	int row,stars,n,spaces;
	cin>>n;
	for(row=1;row<=(n+1)/2;row++){
		if(row==1){
			for(stars=1;stars<=n;++stars){
				cout<<"* ";

			}
		}
		else{
			for(stars=1;stars<=(n-(2*row-3))/2;++stars){
				cout<<"* ";
			}
			for(spaces=1;spaces<=2*row-3;++spaces){
				cout<<"  ";

			}
			for(stars=1;stars<=(n-(2*row-3))/2;++stars){
				cout<<"* ";
			}
		}
		cout<<endl;
	}

	for(row=(n)/2;row>=1;row--){
		if(row==1){
			for(stars=1;stars<=n;++stars){
				cout<<"* ";

			}
		}
		else{
			for(stars=1;stars<=(n-(2*row-3))/2;++stars){
				cout<<"* ";
			}
			for(spaces=1;spaces<=2*row-3;++spaces){
				cout<<"  ";

			}
			for(stars=1;stars<=(n-(2*row-3))/2;++stars){
				cout<<"* ";
			}
		}
		cout<<endl;
	}
	
	return 0;
}
