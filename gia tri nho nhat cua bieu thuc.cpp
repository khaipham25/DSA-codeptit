#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;++i)cin>>a[i];
		for(int i=0;i<n;++i)cin>>b[i];
		sort(a,a+n);
		ll sum=0;
		sort(b,b+n,greater<int>());
		for(int i=0;i<n;++i){
			sum=sum+1ll*a[i]*b[i];
		}
		cout <<sum<<endl;
	}
}

