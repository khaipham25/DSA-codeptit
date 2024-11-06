#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	queue<int> q;
	while(t--){
		string s;cin>>s;
		if(s=="PUSH"){
			int x;cin>>x;
			q.push(x);
		}
		else if(s=="POP"){
			if(!q.empty())q.pop();
		}
		else if(s=="PRINTFRONT"){
			if(!q.empty())cout <<q.front()<<endl;
			else cout <<"NONE"<<endl;
		}
	}
}

