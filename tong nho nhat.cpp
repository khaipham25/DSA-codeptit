#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)cin>>a[i];
		sort(a,a+n);
		string s1="",s2="";
		for(int i=0;i<n;++i){
			if(i%2==0 && a[i]!=0)s1=s1+to_string(a[i]);
			if(i%2!=0 && a[i]!=0)s2=s2+to_string(a[i]);
			
		}
		cout <<stoll(s1)+stoll(s2)<<endl;
	}
}

