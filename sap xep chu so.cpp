#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;string s="";
		set<char> st;
		cin>>n;
		int a[n];
		for(auto &x:a){
			cin>>x;
			s=s+to_string(x);
			
		}
		for(auto y:s)st.insert(y);
		for(auto z:st)cout <<z<<" ";
		cout <<endl;
	}
}

