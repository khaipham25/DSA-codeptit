#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n;bool ok=true;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
			b[i]=a[i];
			
		}
		sort(b,b+n);
		for(int i=0;i<n;++i){
			if(a[i]!=b[n-i-1] && a[i]!=b[i]){
				ok=false;break;
			}
		}
		if(ok==true)cout<<"Yes"<<endl;else cout <<"No"<<endl;
	}
}

