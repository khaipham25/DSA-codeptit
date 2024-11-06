#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
ll mod=123456789;
ll luythua(ll a,ll n){
	if(n==0)return 1;
	int x=luythua(a,n/2);
	if(n%2==0)return x%mod*x%mod;
	else return a%mod*x%mod*x%mod;
}

int main(){
	int t;cin>>t;
	while(t--){
		ll a,n;
		cin>>a;
		cout << luythua(2,a-1)%mod<<endl;
	}
}

