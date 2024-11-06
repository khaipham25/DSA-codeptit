#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
int check(string s){
	for(int i=1;i<s.length()-1;++i){
		if(s[i]=='A' || s[i]=='E'){
			if(s[i-1] != 'A' && s[i-1] !='E' &&s[i+1]!='A'&&s[i+1]!='E')return 0;
		}
	}return 1;
}

int main(){
	char c;
	cin>>c;
	string s="";
	for(char i='A';i<=c;++i)s=s+i;
	if(check(s)==1)cout <<s<<endl;
	while(next_permutation(s.begin(),s.end())){
		if(check(s)==1)cout <<s<<endl;
	}
	
}

