#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	queue<string> q;
	vector<ll> v;
	bool check=true;
	q.push("1");
	while(check){
		string tp=q.front();
		q.pop();
		q.push(tp+"0");
		q.push(tp+"1");
		v.push_back(stoll(tp));
		if(v.size()>=1e4)check=false;
	}
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;++i){
			cout <<v[i]<<" ";
		}
		cout <<endl;
	}
}

