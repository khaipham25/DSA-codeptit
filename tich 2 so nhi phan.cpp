#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
ll pow1(int a,int n){
	if(n==0)return 1;
	int x=pow(a,n/2);
	if(n%2==0)return x*x;
	else return a*x*x;
}
int main(){
	int t;cin>>t;getchar();
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		int n1=s1.size();int n2=s2.size();
		ll res1=0,res2=0,res=0;
		for(int i=0;i<s1.size();++i){
			if(s1[i]=='1')res1=res1+pow1(2,s1.size()-i-1);
		}
		for(int i=0;i<s2.size();++i){
			if(s2[i]=='1')res2=res2+pow1(2,s2.size()-i-1);
		}
		cout <<1ll*res1*res2<<endl;
	}
}

