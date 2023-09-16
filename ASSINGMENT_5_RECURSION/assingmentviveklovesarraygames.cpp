#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli a[18000];
lli presum[18000];

lli recur(lli SUB,int s,int e,lli sum){
	//cout<<sum<<endl;
	if(sum%2==1||s>=e)
		return 0;
	lli ans = 0;
	int start = s;
	int end = e;
	int mid;
	//cout<<s<<' '<<e<<endl;
	while(start<=end){
		mid = (start+end)/2;
		//cout<<mid<<" "<<sum/2<<" "<<presum[mid]<<endl;
		if((sum/2)==presum[mid]-SUB){
			//cout<<mid<<' '<<SUB<<endl;
			//cout<<endl;
			ans = max(recur(SUB,s,mid,sum/2) + 1,1 + recur(presum[mid],mid+1,e,sum/2));
			break;
		}
		else if((sum/2)<presum[mid]-SUB){
			end = mid-1;
		}
		else{
			start = mid + 1;
		}
	}
	return ans;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		lli n;
		cin>>n;
		int flag = 0;
		for(int i=0;i<n;++i){
			cin>>a[i];
			if(a[i]!=0){
				flag = 1;
			}
		}
		
		if(flag==0){
			cout<<n-1<<endl;
			continue;
		}
		
		presum[0] = a[0];
		for(int i=1;i<n;++i){
			presum[i] = presum[i-1] + a[i];
			//cout<<presum[i]<<' ';
		}
		//cout<<endl;
		lli ans = 0;
		ans = recur(0,0,n-1,presum[n-1]);
		cout<<ans<<endl;
	}
}