#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

bool ratinmaze(char maze[][100],int sol[][100],int i,int j,int n,int m){
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
        return true;
    }

    //reccursive case

    //jispr khade ho maanlo waha soln hai
    sol[i][j]=1;
    //pehle right jaakr dekho, milgya toh theek hai
    if(j+1<m and maze[i][j+1]!='X' and sol[i][j+1]==0){
        bool kyarightsebaatbani = ratinmaze(maze,sol,i,j+1,n,m);
        if(kyarightsebaatbani == true){
            return true;
        }
    }
	 if(i+1<n and maze[i+1][j]!='X' and sol[i+1][j]==0){
        bool kyaneechesebaatbani = ratinmaze(maze,sol,i+1,j,n,m);
        if(kyaneechesebaatbani==true){
            return true;
        }
    }
	 if(j-1>=m and maze[i][j-1]!='X' and sol[i][j-1]==0){
        bool kyaleftsebaatbani = ratinmaze(maze,sol,i,j-1,n,m);
        if(kyaleftsebaatbani == true){
            return true;
        }
    }

   
	if(i-1>=0 and maze[i-1][j]!='X' and sol[i-1][j]==0){
        bool kyaupsebaatbani = ratinmaze(maze,sol,i-1,j,n,m);
        if(kyaupsebaatbani==true){
            return true;
        }
    }
    // naa right se raasta mile naa neeche se
    if(sol[i][j]=0){
        
        
    }
    return false;

}
int main ()
{
    int n,m; cin>>n>>m;
    char maze[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>maze[i][j];
		}
	}
    
    int sol[100][100]={0};
    // cout<<endl;
    bool ans=ratinmaze(maze,sol,0,0,n,m);
    // cout<<endl;
	if(ans==false){
		cout<<"NO PATH FOUND";
	}

    return 0;
}