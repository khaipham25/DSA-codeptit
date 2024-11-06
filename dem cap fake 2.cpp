#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		ll a[n];
		ll it=0;
		for(int i=0;i<n;++i)cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n-1;++i){
			it=it+(lower_bound(a+i+1,a+n,k+a[i])-a-i-1);
		}
		cout <<it<<endl;
	}
}

