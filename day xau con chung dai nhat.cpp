#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s1,s2;
		getline(cin,s1);getline(cin,s2);
		s1="x"+s1;s2="x"+s2;
		int dp[1001][1001]={0};
		
		for(int i=1;i<s1.length();++i){
			for(int j=1;j<s2.length();++j){
				if(s1[i]==s2[j])dp[i][j]=dp[i-1][j-1]+1;
				else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
		cout <<dp[s1.length()-1][s2.length()-1]<<endl;
	}
}

