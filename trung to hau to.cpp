#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
int ut(char c){
	if(c=='^')return 3;
	if(c=='*' or c=='/')return 2;
	if(c=='+' or c=='-')return 1;
	return 0;
}
void check(string &s){
	string res="";
	stack<char> st;
	for(int i=0;i<s.size();++i){
		if(isalpha(s[i]))res=res+s[i];
		else if(s[i]=='(')st.push(s[i]);
		else if(s[i]==')'){
			while(!st.empty() and st.top()!='('){
				res=res+st.top();
				st.pop();
			}
			st.pop();
		}
		else {
			while(!st.empty() and ut(s[i])<=ut(st.top())){
				res=res+st.top();
				st.pop();
			}
			st.push(s[i]);
		}
		
	}
	while(!st.empty()){
		res=res+st.top();
		st.pop();
	}
	cout<<res<<endl;
	
}
int main(){
	int t;cin>>t;getchar();
	while(t--){
		string s;
		cin>>s;
		check(s);
	}
}

