#include<iostream>
using namespace std;
int main ()
{
    int arr[100],n,z;
        cin>>n;
        for(z=0; z<n; z++){
            cin>>arr[z];
        }
    int maxcount=0,index=-1,i,j,cnt;
    for(i=0;i<n;i++){
        cnt=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }
            if(cnt>maxcount){
                maxcount=cnt;index=i;
            }
        
    }
    if (maxcount > n / 2){
        cout << arr[index] << endl;
    }
    else{
       // cout << "No Majority Element" << endl;
        return 0;
    }
    return 0;

}