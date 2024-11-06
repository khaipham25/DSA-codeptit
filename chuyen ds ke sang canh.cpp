#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int n;cin>>n;
	cin.ignore();
	vector<pair<int,int>> v;
	for(int i=1;i<=n;++i){
		string s;getline(cin,s);
		stringstream ss(s);
		string tmp;
		while (ss >> tmp){
			v.push_back({i,stoi(tmp)});
		}
		
	}
	for(auto x:v){
		if(x.second >x.first)cout <<x.first <<" "<<x.second<<endl;
	}
}

