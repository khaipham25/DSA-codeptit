#include <bits/stdc++.h>
using namespace std;
int n,k,a[10000],ok,x[100000];
void sinh(){
	int i=n;
	while(i>=1 && a[i]==1){
		a[i]=0;i--;
	}
	if(i==0)ok=0;
	else a[i]=1;
}


int main(){
	cin >>n>>k;
	for(int i=1;i<=n;++i)cin>>x[i];
	ok=1;int dem=0;
	while(ok){
		int sum=0;
		for(int i=1;i<=n;++i){
			if(a[i]==1)sum=sum+x[i];
		}
		if(sum==k){
			for(int i=1;i<=n;++i){
				if(a[i]==1)cout <<x[i]<<" ";
	        }
				cout <<endl;
				dem++;
		}
		sinh();
	}
	cout <<dem;
}

