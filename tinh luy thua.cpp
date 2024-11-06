#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
ll mod=1e9+7;
ll luythua(ll a,ll n){
	if(n==0)return 1;
	ll x=luythua(a,n/2);
	if(n%2==0)return x%mod*x%mod;
	else return a%mod*x%mod*x%mod;
}
int main(){
	
	ll a,n;
	int ok=21;
	while(ok--){
		cin>>a>>n;
		if(a==0 and n==0)break;
		else if(n==0)cout <<"1"<<endl;
		else{
		
		cout <<luythua(a,n)%mod<<endl;
	    }
	}
	
	
	
}

