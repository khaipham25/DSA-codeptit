#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n;int dem=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)cin>>a[i];
		for(int i=0;i<n;++i){
			if(a[i]==0)dem++;
		}
		cout <<dem<<endl;
	}
}

