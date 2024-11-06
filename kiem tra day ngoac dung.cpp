#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
bool check(string &s){
	stack<char> st;
	for(int i=0;i<s.length();++i){
		if(s[i]=='(' or s[i]=='[' or s[i]=='{')st.push(s[i]);
		else{
			if(s[i]==')'){
				if(!st.empty() and st.top() =='(')st.pop();
				else return false;
			}
			if(s[i]==']'){
				if(!st.empty() and st.top() =='[')st.pop();
				else return false;
			}
			if(s[i]=='}'){
				if(!st.empty() and st.top() =='{')st.pop();
				else return false;
			}
		}
	}
	if(!st.empty())return false;//TH bi le
	return true;
}
int main(){
	int t;cin>>t;getchar();
	while(t--){
		string s;
		cin>>s;
		if(check(s))cout <<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

