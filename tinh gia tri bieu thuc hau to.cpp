#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
int solve(string s){
	stack<int> st;
	int res;
	for(int i=0;i<s.size();++i){
		if(isdigit(s[i]))st.push(s[i]-'0');
		else{
			int tp1=st.top();st.pop();
			int tp2=st.top();st.pop();
			if(s[i]=='*')res=tp2*tp1;
			if(s[i]=='/')res=tp2/tp1;
			if(s[i]=='+')res=tp2+tp1;
			if(s[i]=='-')res=tp2-tp1;
			st.push(res);
		}
	}
	return res;
}
int main(){
	int t;cin>>t;getchar();
	while(t--){
		string s;cin>>s;
		cout <<solve(s)<<endl;
	}
}

