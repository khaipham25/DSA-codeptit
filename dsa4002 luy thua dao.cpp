#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
ll mod=1e9+7;
ll luythua(ll a,ll n){
	if(n==1)return a;
	ll x=luythua(a,n/2);
	if(n%2==0)return (x%mod*x%mod)%mod;
	 return a*(x%mod*x%mod)%mod;
}
ll dao(ll a){
	ll b=0;
	while(a!=0){
		b=b*10+a%10;
		a=a/10;
	}
	return b;
}
int main(){
	int t;cin>>t;
	while(t--){
		ll a,n;
		cin>>a;
		
		cout << luythua(a,dao(a)) <<endl;
	}
}
