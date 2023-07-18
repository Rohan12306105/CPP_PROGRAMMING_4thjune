#include<iostream>
using namespace std;

int main(){
    int n,i,no,row;
    cin>>n;
    i=1;
    row=1;
    no=1;
            while(row<=n)
            {
                        if(row%2==0)
                        {
                                no=0;
                        }
                            else
                            {
                                    no=1;
                            }
                            i=1;
                                while(i<=row)
                                {
                                        cout<<no;
                                        no=1-no;
                                        i++;
                                }
                    cout<<endl;
                    row++;

            }
}
