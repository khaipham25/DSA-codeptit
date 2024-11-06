#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		queue<string> q;
		q.push("9");
		bool check=1;
		while(check){
			ll tp=stoll(q.front());
			q.pop();
			if(tp%n==0){
				cout <<tp<<endl;
				check=0;
				break;
			}else {
				q.push(to_string(tp)+'0');
				q.push(to_string(tp)+'9');
			}
		}
	}
}

