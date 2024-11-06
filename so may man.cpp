#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
int tong(string s){
	int res=0;
	for(int i=0;i<s.size();++i){
		res=res+s[i]-'0';
	}
	return res;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		queue<string> q;
		int check=1;
		q.push("4");
		q.push("7");
		while(check){
			string fr=q.front();q.pop();
			if(tong(fr)==n){
				cout<<fr<<endl;
			//	check=0;
				break;
			}
			if(tong(fr)>n){
				cout <<"-1"<<endl;
			//	check=0;
				break;
			}
			q.push(fr+"4");
			q.push(fr+"7");
		}
	}
}

