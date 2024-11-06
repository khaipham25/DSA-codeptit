#include <bits/stdc++.h>
using namespace std;
int n,k,ok;int a[10000];
set<string> s;
void sinh(){
	int i=k;
	while(i>=1 && a[i]==n-k+i)i--;
	if(i==0)ok=0;
	else {
		a[i]++;
		for(int j=i+1;j<=k;j++)a[j]=a[j-1]+1;
	}
}
int main(){
	cin>>n>>k;
	string v[n+1];
	getchar();
	for(int i=1;i<=n;++i){
		cin>>v[i];
		a[i]=i;
		s.insert(v[i]);
	}ok=1;
	n=s.size();
	vector<string> vt;
	for(auto x:s)vt.push_back(x);
	while(ok){
		for(int i=1;i<=k;++i){
			cout <<vt[a[i]-1]<<" ";
		}cout <<endl;
		sinh();
	}
	

}

