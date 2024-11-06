#include <bits/stdc++.h>
using namespace std;
int ok,n,a[100000];
string s;
void sinh(){
	int i=s.size()-1;
	while(i>=0 && s[i]=='0'){
		s[i]='1';i--;
	}
	if(i==-1){
		for(int i=1;i<=n;++i)s[i]='1';
	}
	else s[i]='0';
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>s;
		sinh();
		cout <<s;
		cout <<endl;
	}
}

