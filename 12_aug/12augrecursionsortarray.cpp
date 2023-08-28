#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

int issorted(int *a,int n){
    //base case
    if (n<=1){
        return true;
    }
    //recursive case
    if(a[0]<a[1] and issorted(a+1,n-1)){
        return true;
    }
    else{
        return false;
    }
    
}


int main ()
{
    int n;
    cin>>n;cout<<endl;
    int a[n],i;
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<endl<<issorted(a,n)<<endl;
    return 0;
}
  




//////////////  alternate method



// #include<bits/stdc++.h>
// #include<iostream>
// #include<climits>
// #include<cstring>
// #include<algorithm>
// using namespace std;

// int issorted2(int *a,int n){
//     //base case
//     if (n<=1){
//         return true;
//     }
//     //recursive case
//     if(a[n-2]<=a[n-1] and issorted2(a,n-1)){
//         return true;
//     }
//     else{
//         return false;
//     }
    
// }


// int main ()
// {
//     int n;
//     cin>>n;cout<<endl;
//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     cout<<endl<<issorted2(a,n)<<endl;
//     return 0;
// }
  