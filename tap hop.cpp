#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
int n,k,a[1000],ok,s;int dem;
void inkq(){
	int sum=0;
	for(int i=1;i<=k;++i)sum=sum+a[i];
	if(sum==s)dem++;
}
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;++j){
		a[i]=j;
		if(i==k)inkq();
		else Try(i+1);
	}
}
int main(){
	while(1){
		cin>>n>>k>>s;
		for(int i=1;i<=n;++i)a[i]=i;
		if(n==0 and k==0 and s==0)break;
		dem=0;
		Try(1);
		cout <<dem<<endl;
	}
}

