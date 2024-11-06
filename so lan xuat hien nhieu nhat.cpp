#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<int,int> mp;
		int a[n];int res=0;
		for(int i=0;i<n;++i){
			cin >> a[i];
			mp[a[i]]++;
			if(mp[a[i]]>(n/2))res=a[i];
		
		}
	    if (res==0)cout <<"NO"<<endl;
	    else cout <<res<<endl;
	}
}
		
	
	


