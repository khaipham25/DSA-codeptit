#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	queue<int> st;
	string s;
	vector<int> v;
	while(cin>>s){
		if (s[1]=='u'){
			int x;cin>>x;
			st.push(x);
			v.push_back(x);
		}
		else if(s[0]=='s'){
			if(v.size()==0)cout<<"empty"<<endl;
			else{
		 	for(auto x:v)cout <<x<<" ";
			cout <<endl;
		    } 
		}
	 	else if(s[1]=='o'){
	 		if (!v.empty()) 
                v.pop_back();
//            if (!st.empty())
//                st.pop();
		 }
	}
}

