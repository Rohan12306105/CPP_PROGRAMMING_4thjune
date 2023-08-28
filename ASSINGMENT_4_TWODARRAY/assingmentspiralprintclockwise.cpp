#include <iostream>
using namespace std;

int main(){
	
	// gereral work
	int a[100][100],n,r,c,num,m;
	cin>>n>>m;
	for(r=0;r<n;r++){
		for(int c=0;c<m;c++){
			cin>>num; a[r][c]=num;
		}
	}


	// // print 2d
	// cout<<endl;
	// for(r=0;r<n;++r){
	// 	for(int c=0;c<m;c++){
	// 		cout<< a[r][c]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	// cout<<endl;


	//spiral print
	int sr=0,sc=0,er=n-1,ec=m-1;
	while(sr<=er and sc<=ec){

		//print sr,sc till ec
		for( c=sc;c<=ec;++c){
			cout<<a[sr][c]<<", ";
		}
		sr++;

		//print ec,sr till er
		for( r=sr;r<=er;++r){
			cout<<a[r][ec]<<", ";
		}
		ec--;

		//print er,ec till sc
		if(sr<=er){
			for( c=ec;c>=sc;--c){
			cout<<a[er][c]<<", ";
			}
			er--;
		}
		
		//print sr,er till sr
		if(sc<=ec){
			for( r=er;r>=sr;--r){
			cout<<a[r][sc]<<", ";
			}
			sc++;
		}
		
	}
	cout<<"END";
}