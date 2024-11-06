#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
int n,b[100005],a[100005];
vector<vector<int>> res;
bool check(vector<int> vt){
	for(int i=0;i<vt.size()-1;++i){
		if(vt[i]>vt[i+1])return false;
	}return true;
}
void inkq(){
	vector<int> v;
	for(int i=1;i<=n;++i){
		if(a[i]==1)v.push_back(b[i]);
	}
	if(check(v)==true)res.push_back(v);
}
void Try(int i){
	for(int j=0;j<=1;++j){
		a[i]=j;
		if(i==n)inkq();
		else Try(i+1);
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;++i)cin>>b[i];
	Try(1);
	for(int i=0;i<res.size();++i){
		for(int j=0;j<res[i].size();++j){
			cout <<res[i][j]<<" ";
		}
		cout <<endl;
	}
}

