#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		cin >> n>>k;
		int a[n];
		for(int i=0;i<n;++i)cin>>a[i];
		bool dp[1001]={false};
		dp[0]=true;
		for(int i=0;i<n;++i){
			for(int j=k;j>=a[i];--j){
					if(dp[j-a[i]]==true)dp[j]=true;
			}
		}
		if(dp[k])cout <<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

