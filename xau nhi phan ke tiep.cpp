#include <bits/stdc++.h>
using namespace std;
int n,k,a[10000],ok,x[100000];
string s;
void sinh(){
	int i=s.size()-1;
	while(i>=0 && s[i]=='1'){
		s[i]='0';i--;
	}
	if(i==-1){
		for(int i=0;i<s.size();++i){
			s[i]='0';
		}
	}
	else s[i]='1';
}
int main(){
	int t;cin>>t;getchar();
	while(t--){
		getline(cin,s);
		sinh();
		cout <<s;
		cout <<endl;
	}
}

