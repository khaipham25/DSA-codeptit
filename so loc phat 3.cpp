#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		queue<string> q;
		q.push("6");
		q.push("8");
		vector<ll> v;
		int l=0;
		while(l<=n){
			ll tp=stoll(q.front());
			q.pop();
			v.push_back(tp);
			
			q.push(to_string(tp)+'6');
			q.push(to_string(tp)+'8');
		    l=q.front().length();
			
		}
		cout <<v.size()<<endl;
		for(int i=v.size()-1;i>=0;--i){
			cout << v[i]<<" ";
		}
		cout <<endl;
	}
}

