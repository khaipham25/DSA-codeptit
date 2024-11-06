#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
int n;
vector<int> a(10000);
void init(){
	cin>>n;
	for(int i=0;i<n;++i)cin>>a[i];
}
void dynamic(){
	vector<int> dp(n,1);
	for(int i=1;i<n;++i){
		for(int j=0;j<i;++j){
			if(a[i]>=a[j]){
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
	}
	cout<<n- *max_element(dp.begin(),dp.end());
}

int main(){
	int t;cin>>t;
	while(t--){
		init();
         dynamic();
         cout <<endl;
	}
    
}

