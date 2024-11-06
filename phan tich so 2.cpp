#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
int a[100005];int n;int dem;
void inkq(int m){
	cout<<"(";
	for(int i=1;i<m;++i)cout <<a[i]<<" ";
	cout <<a[m]<<")";
}
void Try(int i,int pre){
	int tong=0;
	for(int j=pre;j>=1;--j){
		a[i]=j;
		for(int k=1;k<=i;++k)tong=tong+a[k];
		if(tong==n){
			dem++;
			inkq(i);
		}
		else Try(i+1,j);
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		dem=0;
		Try(1,n);
	}
}

