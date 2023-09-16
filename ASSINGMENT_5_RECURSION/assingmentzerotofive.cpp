#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

int zerotofive(int n) {
   if(n==0){
      return 0;
   }
   int last_digit= n%10;
   if(last_digit==0)
      last_digit=5;
   return zerotofive(n/10)*10 +last_digit;
}
int main() {
   int n;cin>>n;
   cout << zerotofive(n) ;
}