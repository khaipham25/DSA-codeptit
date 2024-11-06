#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
bool cmp(pair<int,int> a,pair<int,int> b){
	return a.first<b.first;
}

int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		vector<pair<int,int>> vp;
		for(int i=0;i<n;++i){
			cin>>a[i];
			vp.push_back({a[i],i});
		}
		sort(vp.begin(),vp.end(),cmp);
		int dem=-1e9;
		int last=vp[0].second;
		for(int i=1;i<n;++i){	
			if(vp[i].second-last>dem)
			dem=vp[i].second-last;
			last=min(last,vp[i].second);
		}
	
//		if(dem<0)cout <<"-1"<<endl;
		 cout <<dem<<endl;
	}
}

