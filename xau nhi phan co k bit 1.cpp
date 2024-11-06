#include <bits/stdc++.h>
using namespace std;
int ok,n,k,a[100000];
void sinh(){
	int i=n;
	while(i>0 && a[i]==1){
		a[i]=0;i--;
	}
	if(i==0)ok=0;
	else a[i]=1;
}
int check(){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(a[i]==1)dem++;
	}
	if (dem==k){return 1;
	}else return 0;
	
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		ok=1;
		for(int i=1;i<=n;++i)a[i]=0;
		while(ok){
			if(check()==1){
				for(int i=1;i<=n;++i){
					cout <<a[i];
				}
				cout <<endl;
			}
		
			sinh();
			
	    }
		
    }
}

