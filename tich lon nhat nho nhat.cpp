#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		long long a[n],b[m];
		for(auto &x:a)cin>>x;
		for(auto &y:b)cin>>y;
		cout <<*max_element(a,a+n)*(*min_element(b,b+m));
		cout <<endl;
	}
}

