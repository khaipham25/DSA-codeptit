#include <bits/stdc++.h>
using namespace std;
long long n,a[10001][10001],x[10001],k;vector<string> v;
long long check(){
	long long sum=0;
	string s="";
	for(int i=0;i<n;++i){
		sum=sum+a[i][x[i]];
		s=s+to_string(x[i]+1)+" ";
	}
	if(sum==k){
		
		v.push_back(s);
		return 1;
	}
	return 0;
}
int main(){
	int t=1;
	while(t--){
		long long res=0;
		cin>>n>>k;
		for(int i=0;i<n;++i){
		    for(int j=0;j<n;++j)cin>>a[i][j];
		}
		for(int i=0;i<n;++i)x[i]=i;
		if(check()==1)res++;
		while (next_permutation(x,x+n)){
			if(check()==1)res++;
		}
		cout <<res<<endl;
		for(auto x:v)cout <<x<<endl;
	}
}

