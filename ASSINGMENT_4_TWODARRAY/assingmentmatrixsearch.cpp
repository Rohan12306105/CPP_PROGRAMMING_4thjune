#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	int a[30][30],n,m,num,cols,rows,target_key; 
    //n- max num of rows,m- max num of cols
	cin>>n>>m;
	for( rows=0;rows<n;rows++){
		for( cols=0;cols<m;cols++){
            cin>>num;
			a[rows][cols]=num;
		}
	}
	cin>>target_key;
	for( rows=0;rows<n;++rows){
		for( cols=0;cols<m;cols++){
			if(a[rows][cols]==target_key){
				cout<<"1";
                break;
			}
		}
		if(cols<m){
			break;
		}
	}
	if(rows==n){
		cout<<"0";
    }
	return 0;
}
