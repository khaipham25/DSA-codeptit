#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(auto &x:a)cin>>x;
		sort(a,a+n);
		int l=0;int r=n-1;
		while(l<=r){
			cout <<a[r]<<" "<<a[l]<<" ";
			r--;l++;
		}
		cout <<endl;
	}
}

