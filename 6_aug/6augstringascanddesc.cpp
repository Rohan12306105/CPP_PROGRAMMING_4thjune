
#include<iostream>
#include<algorithm>
using namespace std;
bool comp(string a,string b){
	return a<b;
                // a<b - ascending
                // a>b - descending
}
int main ()
{
	string s[]={
		"hello",
		"coding",
		"blocks"
	};
	int number_of_strings;
	cin>>number_of_strings;
	sort(s,s+number_of_strings,comp);
	for (int i = 0; i < number_of_strings; i++)
	{
		cout<<s[i]<<endl;
	}
	
    return 0;
}