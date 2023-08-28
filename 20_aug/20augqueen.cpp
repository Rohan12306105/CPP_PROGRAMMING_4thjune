#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;



bool kyasafehai(int board[][100],int i,int j,int n){
    //current col j mei queen check karo,nahi honi chahiye
    for (int r = 0; r < i; r++)
    {
        if(board[r][j]==1){
            return false;
        }
    }
    //check karo right diagnol
    int copy_i=i,copy_j=j; // copy banai taaki i and j khoo naa jaaye
    while(i>=0 and j<n){
        if(board[i][j]==1){
            return false;
        }
        i--;j++;
    }
    //check karo left diagnol
    i=copy_i;j=copy_j;
    while(i>=0 and j>=0){
        if(board[i--][j--]==1){
            return false;
        }
    }
    //agar upar mai kahi queen nahi hai that means location is safe
    return true;
}






bool nqueen(int board[][100],int i,int n){
    //base case
    if(i==n){
        //print the board jisme queen kaha rkhi hai stored hai
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                //cout<<board[i][j]<<" ";
                board[i][j]==1 ? cout<<"Q ":cout<<"_ ";
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
        //return tru kardo agr sirf ek case print karna
        
    }
    //recursive case
    for (int  j = 0; j < n; j++){
        if(kyasafehai(board,i,j,n)==true){
            //agar current ith row ka jth col safe hai toh queen ko rkh doo
            board[i][j]=1;
            //ab ek queen rkhdi, ab n-1 recursion ko bolo rkh kar bta
            bool baakihuiplace =nqueen(board,i+1,n);
            if(baakihuiplace == true){ // agar baaki place ho gai toh baat bann gyi
                return true;
            }
            //agar baaki place nhi ho paayi , toh jo queen rkhi thii,vo galt hai
            //usee hatao waha se
            board[i][j]=0;//backtracking
        }
    }
    //agar ith row ke kisi bhi col par queen nhi place ho pai ho
    return false;
}





int main ()
{
    int board [100][100]={0};
    int n; cin>>n;
    nqueen(board,0,n);

    return 0;
}