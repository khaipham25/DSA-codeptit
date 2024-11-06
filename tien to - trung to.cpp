#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
void solve(string s){
	stack<string> st;
	for(int i=s.size()-1;i>=0;--i){
		if(isalpha(s[i]))st.push(string(1,s[i]));
		else {
			string tp1=st.top();st.pop();
			string tp2=st.top();st.pop();
			st.push("("+tp1+s[i]+tp2+")");
		}
	}
	cout <<st.top()<<endl;
}
int main(){
	int t;cin>>t;getchar();
	while(t--){
		string s;cin>>s;
		solve(s);
	}
}

