#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
bool check(string s){
	stack<int> st;
	for(int i=0;i<s.size();++i){
		if(s[i]=='(')st.push(i);
		else if(s[i]==')'){
			int j=st.top();
			st.pop();
			if(i-j==2 or s[j-1]=='(' and s[i+1]==')')return true;
		}
	}return false;
}
int main(){
	int t;cin>>t;getchar();
	while(t--){
		string s;cin>>s;
		if(check(s))cout<<"Yes"<<endl;
		else cout <<"No"<<endl;
	}
}

