#include <bits/stdc++.h>
using namespace std;
int n,k,a[100000],ok;
void sinh(){
	int i=k;
	while(i>=1&&a[i]==n-k+i)i--;
	if(i==0)ok=0;
	else {
		a[i]++;
		for(int j=i+1;j<=k;++j)a[j]=a[j-1]+1;
	}
}
int main(){
	int t;cin>>t;
while(t--){
	
	    cin>>n>>k;
	set<int> s;
	int b[n];
	for(int i=1;i<=n;++i){
		cin>>b[i];
		s.insert(b[i]);
		a[i]=i;
	}
	n=s.size();
	vector<int> v;
	for(auto x:s)v.push_back(x);
	ok=1;
	while(ok){
		for(int i=1;i<=k;++i)cout << v[a[i]-1]<<" ";
		cout <<endl;
		sinh();
	}
}
}

