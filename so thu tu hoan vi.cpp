#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,dem=1;cin>>n;
		vector<int> v;
		vector<int> a(n),b(n);
		for(int i=0;i<n;++i){
			cin>>a[i];
			b[i]=i+1;
		}
		if(b==a)cout <<"1"<<endl;
		else {
			int cnt=1;
			while(b!=a){
				cnt++;
				next_permutation(b.begin(),b.end());
			}
			cout <<cnt<<endl;
		}
	}
}

