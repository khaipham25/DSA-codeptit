#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		ll n;cin>>n;
		ll a[n];ll res[n];
		for(ll i=0;i<n;++i)cin>>a[i];
		res[n-1]=-1;
		stack<ll> st;
		st.push(a[n-1]);
		for(ll i=n-2;i>=0;--i){
			if(st.size() and a[i]<st.top()){
				res[i]=st.top();
				st.push(a[i]);
			}else{
			    while(st.size()and a[i]>=st.top()){
				    st.pop();
				}
				if(st.size()){
					res[i]=st.top();
				}else res[i]=-1;
				st.push(a[i]);
		    }
		}
		for(auto x:res)cout <<x<<" ";
		cout <<endl;
	}
}

