#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n],b[n-1];
		for(long long i=0;i<n;i++)cin>>a[i];
		for(long long i=0;i<n-1;i++)cin>>b[i];
		for(long long i=0;i<n;++i){
			if(a[i]!=b[i]){
				cout <<i+1;break;
			}
		}cout  <<endl;
	}
}

