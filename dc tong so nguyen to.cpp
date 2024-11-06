#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
int n,a[10000],b[10000];
int nt(int a){
	for(int i=2;i<=sqrt(a);++i){
		if(a%i==0)return 0;
	}return a>1;
}
bool cmp(int m,int n){
	return m>n;
}
void init(){
	cin>>n;
	for(int i=1;i<=n;++i)cin>>b[i];
	sort(b+1,b+n+1,cmp);
}
void in(){
	ll sum=0;
	for(int i=1;i<=n;++i){
		if(a[i]==1)sum=sum+b[i];
	}
	if(nt(sum)){
		for(int i=1;i<=n;++i){
			if(a[i]==1){
				cout <<b[i]<<" ";
			}
		}cout<<endl;
	}
}
void Try(int i){
	for(int j=0;j<=1;++j){
		a[i]=j;
		if(i==n)in();
		else Try(i+1);
	}
}

int main(){
	
	int t;cin>>t;
	while(t--){
		init();
	    Try(1);
	}
}

