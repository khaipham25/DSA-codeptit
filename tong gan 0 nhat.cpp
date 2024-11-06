#include <bits/stdc++.h>
#include <climits>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		ll a[1000];
		for(int i=0;i<n;++i)cin>>a[i];
		ll res=INT_MAX;
		ll minnn=INT_MAX;
		sort(a,a+n);
		for(int i=0;i<n;++i){
			for(int j=i+1;j<n;++j){
				if(abs(a[i]+a[j])<minnn){
					minnn=abs(a[i]+a[j]);
					res=a[i]+a[j];
				}
			}
		}
		cout <<res<<endl;
	}
}

