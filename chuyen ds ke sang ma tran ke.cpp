#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
    int n;cin>>n;
    getchar();
    int a[n+1][n+1]={0};
    for(int i=1;i<=n;++i){
    	string s;
    	getline(cin,s);
    	istringstream ss(s);
    	string tmp;
    	while(ss>>tmp){
    		a[i][stoi(tmp)]=1;
		}
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			cout <<a[i][j]<<" ";
		}
		cout <<endl;
	}
	
}
