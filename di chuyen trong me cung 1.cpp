#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
vector<string> res;
int n;int a[1005][1005];
void Try(int x,int y,string s){
	if(x>=n or y>=n)return;
	if(a[x][y]==0)return;
	if(x==n-1 and y==n-1){
		res.push_back(s);
		return;
	}
	Try(x+1,y,s+"D");
	Try(x,y+1,s+"R");
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		string s="";
		res.clear();
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				cin>>a[i][j];
			}
		}
		Try(0,0,"");
		if(res.size()==0)cout <<"-1"<<endl;
		else {
			for(auto x:res)cout <<x<<" ";
			cout <<endl;
		}
	}
}

