#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
void check(string &s){
	stack<char> st;
	int dem=0;
	st.push(-1);
	for(int i=0;i<s.size();++i){
		if(s[i]=='(')st.push(i);
		else {
			st.pop();
		if(st.empty())st.push(i);
		else dem=max(dem,i-st.top());

		}
	}
	
	cout <<dem<<endl;
}
int main(){
	int t;cin>>t;cin.ignore();
	while(t--){
		string s;cin>>s;
		check(s);
	}
}
