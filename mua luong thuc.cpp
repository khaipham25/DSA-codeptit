#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n,s,m;
		cin >>n>>s>>m;
		if((s-s/7)*n<s*m)cout <<"-1"<<endl;
		else for(int i=1;i<=s-s/7;++i){
			if(n*i>=s*m){
				cout <<i<<endl;
				break;
			}
		}
	}
}

