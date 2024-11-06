#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
bool cmp(pair<int,int> a,pair<int,int> b){
	return a.second<b.second;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<pair<int,int>> v(n);
		for(int i=0;i<n;++i){
			cin>>v[i].first>>v[i].second;
		}
		
		sort(v.begin(),v.end(),cmp);
		int dem=1;
		int end_time=v[0].second;
		for(int i=1;i<n;++i){
			if(v[i].first>=end_time){
				dem++;
				end_time=v[i].second;
			}
		}
		cout <<dem<<endl;
	}
	
}
