#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
int n,k;int a[10001];int cnt;vector<string> v;
int check(){
	int dem=0;int ok=0;
	for(int i=1;i<=n;++i){
		if(a[i]==0)dem++;
		else dem=0;
		if(dem==k)ok++;
		if(dem>k)return 0;
	}if(ok==1)return 1;else return 0;
}
void inkq(){
	if(check()==1){
		cnt++;
		string s="";
		for(int i=1;i<=n;++i){
			if(a[i]==0)s=s+"A";
			else s=s+"B";
		}
		v.push_back(s);
	}
}
void Try(int i){
	for(int j=0;j<=1;++j){
		a[i]=j;
		if(i==n)inkq();
		else Try(i+1);
	}
}
int main(){
	cin>>n>>k;
	Try(1);
	cout <<cnt<<endl;
	for(auto x:v)cout <<x<<endl;
}

