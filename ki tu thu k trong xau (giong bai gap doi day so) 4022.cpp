#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		char cnt='A';
		while(k%2!=1){
			cnt++;
			k=k/2;
		}
		cout<<cnt<<endl;
	}
}

