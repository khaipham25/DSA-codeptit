#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	queue<int> st;
	int t;cin>>t;
	string s;
	vector<int> v;
	while(t--){
		cin>>s;
		if (s[1]=='U'){
			int x;cin>>x;
			st.push(x);
			v.push_back(x);
		}
		else if(s[1]=='R'){
			if(v.size()==0)cout<<"NONE"<<endl;
			else{
		 	cout <<v[v.size()-1]<<" ";
			cout <<endl;
		    } 
		}
	 	else if(s[1]=='O'){
	 		if (!v.empty()) 
                v.pop_back();    

		 }
	}
}

