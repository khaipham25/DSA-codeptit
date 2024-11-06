#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(auto &x:a)cin>>x;
		sort(a,a+n);
		for(auto y:a)cout <<y <<" ";
		cout<<endl;
	}
}

