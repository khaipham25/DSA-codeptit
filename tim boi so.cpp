#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		ll n;cin>>n;
		queue<string> q;
		q.push("9");
		int ok=1;
		while(ok){
			string tp=q.front();q.pop();
			if(stoll(tp)%n==0){
				cout <<tp << endl;
				break;
			}
			q.push(tp+"0");
			q.push(tp+"9");
		}
	}
}

