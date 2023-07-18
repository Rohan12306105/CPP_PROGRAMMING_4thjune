#include<iostream>
#include<climits>
using namespace std;

int main(){
   int n , i ,no , l;
   cin>>n;
   i=1;
   l=INT_MIN;
   while ( i<=n){
        cin>>no;
   if (no>l){
        l=no;
    }
        i=i+1;
    }
    cout<<"laregst:"<<l<<endl;
    return 0;
}



