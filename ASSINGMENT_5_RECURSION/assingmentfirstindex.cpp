#include<bits/stdc++.h>

using namespace std;

int firstIndex(int input[], int size, int x, int currIndex){
    if(size==currIndex){
        return -1;
    }

    if(input[currIndex] == x){
        return currIndex;
    }

    return firstIndex(input,size,x,currIndex+1);
    
}

int main(){
    int size;cin>>size;
    int input[size];
    for (int i = 0; i < size; i++)
    {
        cin>>input[i];
    }
    
    int x;cin>>x;
    

    cout<<firstIndex(input,size,x,0);

    return 0;
}
