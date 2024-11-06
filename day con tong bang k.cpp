#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int n,a[10000],ok;
void ktao(){
	for(int i=1;i<=n;++i)a[i]=0;
}
void sinh(){
	int i=n;
	while(i>=1 && a[i]==1){
		a[i]=0;
		--i;
	}
	if (i==0)ok=0;
	else a[i]=1;
}
int main(){
	int t;cin>>t;
	while(t--){
		int k;
		cin>>n>>k;
		int b[n];
		for(int i=1;i<=n;++i)cin>>b[i];
		sort(b+1,b+n+1);
		ktao();
		ok=1;
		int check=0;
		
		vector<vector<int>> vv;
		while(ok){
			int sum=0;
			for(int i=1;i<=n;++i){
				if(a[i]==1)sum=sum+b[i];
			}
			if(sum==k){
				check=1;
				vector <int> v;
				for(int i=1;i<=n;++i){
					if(a[i]==1)v.push_back(b[i]);
				}
				vv.push_back(v);
			}
			sinh();
		}
		for(int i=vv.size()-1;i>=0;--i){
			cout<<"[";
			for(int j=0;j<vv[i].size();++j){
				cout <<vv[i][j];
				if(j!=vv[i].size()-1)cout<<" ";
				
			}cout<<"] "; 
		}
		if(check==0)cout <<"-1";
		cout <<endl;
	}
}

