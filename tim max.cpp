#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
const ll MOD=1000000007;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;int a[n];
		for(int i=0;i<n;++i)cin>>a[i];
		sort(a,a+n);
		ll sum=0;
		for(int i=0;i<=n-1;++i){
			sum=sum+1ll*a[i]*i;
			sum=sum%MOD;
		}
		cout<<sum<<endl;
	}
}

