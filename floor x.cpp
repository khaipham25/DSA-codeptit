#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		if(k<a[0])cout <<"-1"<<endl;
		else {
		    auto h=upper_bound(a,a+n,k)-a;
		    cout <<h <<endl;
		}
		
	}
}

