#include <bits/stdc++.h>
using namespace std;
int n,k,ok;
int a[100000];
void sinh(){
	int i=k;
	while(i>=1 && a[i]==n-k+i)i--;
	if(i==0)ok=0;
	else {
		a[i]++;
		for(int j=i+1;j<=k;j++)a[j]=a[j-1]+1;
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k;string s="";
		for(int i=1;i<=n;i++){
			s=s+char('A'+i-1);
			a[i]=i;
		}
		ok=1;
		while(ok){
			for(int i=1;i<=k;++i)cout <<s[a[i]-1];
			cout <<endl;
			sinh();
		}
		
	
	}
}

