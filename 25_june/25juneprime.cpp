#include<iostream>
using namespace std;
int main ()
{
            int i , no , n ;
            bool prime;
            cin>>n;
            for (no=2; no<=n; ++no)
            {
                    prime =true;

                    for (i=2; i<=no-1;i++)
                    {
                        if(no%i==0)
                        {
                            prime=false;
                        }
                    }

                    if (prime == true)
                    {
                        cout<<no<<" ";
                    }
            }
            cout<<endl;
            return 0;
}

