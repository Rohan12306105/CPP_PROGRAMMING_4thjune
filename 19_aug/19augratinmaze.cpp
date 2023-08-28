#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

bool ratinmaze(char maze[][5],int sol[][10],int i,int j,int n,int m){
    //base case
    if(i==n-1 and j==m-1){
        sol[i][j]=1;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
    }

    //reccursive case

    //jispr khade ho maanlo waha soln hai
    sol[i][j]=1;
    //pehle right jaakr dekho, milgya toh theek hai
    if(j+1<m and maze[i][j+1]!='X'){
        bool kyarightsebaatbani = ratinmaze(maze,sol,i,j+1,n,m);
        if(kyarightsebaatbani == true){
            return true;
        }
    }
    //phr neeche jaakr dekho , mil gya toh theek hai
    if(i+1<n and maze[i+1][j]!='X'){
        bool kyaneechesebaatbani = ratinmaze(maze,sol,i+1,j,n,m);
        if(kyaneechesebaatbani==true){
            return true;
        }
    }
    // naa right se raasta mile naa neeche se
    sol[i][j]=0;
    return false;

}
int main ()
{
    char maze[][5]={
        "0000",
        "00XX",
        "0000",
        "XX00"
    };
    int sol[10][10]={0};
    cout<<endl;
    ratinmaze(maze,sol,0,0,4,4);
    cout<<endl;
    return 0;
}