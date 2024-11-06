#include<bits/stdc++.h> 
using namespace std; 
#define ll long long 
int main(){ 
   int t; cin>>t; 
    while(t--){ 
		int n,m; cin>>n>>m; 
		set<int>se; 
		for(int i=0;i<m;i++){ 
		    int x,y; cin>>x>>y; 
			se.insert(x); se.insert(y); 
		} 
		if(se.size()!=m){ 
		cout<<"NO\n"; }else{ cout<<"YES\n"; } 
	} 
}
