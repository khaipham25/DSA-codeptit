#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
ll mod=1e9+7;
ll luythua(ll a,ll n){
	if(n==0)return 1;
	int x=luythua(a,n/2);
	if(n%2==0)return x%mod*x%mod;
	else return a%mod*x%mod*x%mod;
}
int main(){
	int t;cin>>t;
	getchar();
	while(t--){
		int a,n;
		cin>>a;
		string s=to_string(a);
		reverse(s.begin(),s.end());
		ll k=stoll(s);
		cout << luythua(a,k)<<endl;
	}
}

