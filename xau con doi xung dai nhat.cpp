#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;getchar();
	while(t--){
		string s;
		cin>>s;
		s='x'+s;
		int res=1;
		int f[1001][1001]={0};
		for(int i=1;i<s.length();++i)f[i][i]=1;
		for(int len=2;len<s.length();++len){
			for(int i=1;i<s.length()-len+1;++i){
				int j=i+len-1;
				if (len==2 && s[i]==s[j])f[i][j]=1;
				if(s[i]==s[j] and f[i+1][j-1]==1)f[i][j]=1;
				else if(s[i]!=s[j])f[i][j]=0; 
				if(f[i][j])res=max(res,len);
			}
			
		}
		cout <<res<<endl;
	}
}

