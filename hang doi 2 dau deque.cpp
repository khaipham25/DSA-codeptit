#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	deque<int> dq;
	while(t--){
		string s;cin>>s;
		if(s=="PUSHBACK"){
			int x;cin>>x;
			dq.push_back(x);
		}
		else if(s=="PUSHFRONT"){
			int y;cin>>y;
			dq.push_front(y);
		}
		else if(s=="POPFRONT"){
			if(!dq.empty())dq.pop_front();
		}
		else if(s=="POPBACK"){
			if(!dq.empty())dq.pop_back();
		}
		else if(s=="PRINTFRONT"){
			if(!dq.empty())cout <<dq.front()<<endl;
			else cout <<"NONE"<<endl;
		}
		else if(s=="PRINTBACK"){
			if(!dq.empty())cout <<dq.back()<<endl;
			else cout <<"NONE"<<endl;
		}
	}
}

