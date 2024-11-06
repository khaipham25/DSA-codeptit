#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
int check(string s){
	stack<char> st;
	int dem=0;
	for(int i=0;i<s.size();++i){
		if(s[i]=='[')st.push(s[i]);
		else if(st.empty() and s[i]==']'){
				dem++;
			//	st.pop();
			}
		else if(!st.empty() and s[i]==']')st.pop();
		
	}
	while(!st.empty()){
		dem++;
		st.pop();
	}
	return dem;
}
int main(){
	int t;cin>>t;getchar();
	while(t--){
		string s;
		cin>>s;
		cout << check(s) <<endl;
	}
}

