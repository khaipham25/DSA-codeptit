#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
bool ktra(string &s){
	int dd[100]={0};
	for(auto &x:s){
		dd[x-'0']++;
		if(dd[x-'0']>1)return false;
	}
	return true;
}
int main(){
	int t;cin>>t;
	queue<string> q;
		string s;
		vector<int> res;
		res.push_back(0);
		for(int i=1;i<=5;++i){
			q.push(to_string(i));
			res.push_back(i);
		}
		bool check=1;
		while(check){
			string top=q.front();
			q.pop();
			for(int i=0;i<=5;++i){
				s=top+to_string(i);
				if(ktra(s)){
					q.push(s);
					res.push_back(stoi(s));
				}
				if(stoi(s)>1e5)check=0;
			}
		}
	while(t--){
		int l,r;cin>>l>>r;
		
		int x=lower_bound(res.begin(),res.end(),l)-res.begin();
		int y=lower_bound(res.begin(),res.end(),r)-res.begin();
		if((res[y])>r)--y;
		cout <<y-x+1<<endl;
	}
}

