#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
int n,a[10000];int sum1;int sum2;
int ok;int b[10000];
int check;
void inkq(){
	sum1=0;sum2=0;
	for(int i=1;i<=n;++i){
		if(a[i]==1)sum1=sum1+b[i];
		else sum2=sum2+b[i];
	}
	if(sum1==sum2){
		check=1;
	}
    
}
void Try(int i){
	for(int j=0;j<=1;++j){
		a[i]=j;
	if(i==n)inkq();
	else Try(i+1);
	if(check)return;
    }
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		
		for(int i=1;i<=n;++i){
			cin>>b[i];
		}
		check=0;
		Try(1);
		if(check==0)cout <<"NO"<<endl;
		else cout <<"YES"<<endl;
		
	}
}

