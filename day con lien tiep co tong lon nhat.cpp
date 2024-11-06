#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int sum=0;int res=0;
		for(auto &x:a){
			cin>>x;
			sum=sum+x;
			if(sum<0)sum=0;
			res=max(res,sum);
		}
		cout <<res<<endl;
	}
}

