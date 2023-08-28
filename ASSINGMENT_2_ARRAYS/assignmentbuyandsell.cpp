#include <iostream>
#include<climits>
#include <cstring>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
     int result=0, minVal = INT_MAX;
        int soldToday = -1;
        for(int price: arr){
            minVal = min(price, minVal);
            soldToday = price-minVal;
            result = max(result, soldToday);
        }     
        cout<<result;
    
}











//////// alternate method


// #include<iostream>
// #include<climits>
// #include<cstring>
// #include<algorithm>
// using namespace std;
// int main ()
// {
//     int n;cin>>n;
//     int arr[n],i,max_profit=0,current_prof;
    
// 	for(i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++){
//             current_prof=arr[j]-arr[i];
//             if(current_prof>max_profit){
//                 max_profit=current_prof;
//             }
//         }
        
//     }
//     cout<<endl<<max_profit;
//     return 0;
// }
