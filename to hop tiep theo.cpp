#include <bits/stdc++.h>
using namespace std;
int k,n,a[100000],ok,b[100000];
void sinh(){
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		i--;
	}
	if(i==0)ok=0;
	else {
		a[i]++;
		for(int j=i+1;j<=k;++j)a[j]=a[j-1]+1;
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin >>n>>k;ok=1;int dem=0;vector<int> v;
		for(int i=1;i<=k;++i){
			cin>>a[i];
			b[i]=a[i];
			v.push_back(a[i]);
		}
		sinh();
		if(ok){
			for(int i=1;i<=k;++i){
				if(binary_search(b+1,b+i+1,a[i])==false)dem++;
			}
			cout <<dem;
		}else cout << v.size();
	cout <<endl;	
	}
}

