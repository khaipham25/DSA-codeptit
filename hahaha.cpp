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
		if(a[1]==0 || a[n]==1)return 0;
		if(a[i]==1 && a[i+1]==1)return 0;
	}
	return 1;
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		ok=1;
		for(int i=1;i<=n;++i)a[i]=0;
		while(ok){
			if(check()==1){
				for(int i=1;i<=n;++i){
					if(a[i]==1)cout <<"H";
					else cout <<"A";
				}
				cout <<endl;
			}
		
			sinh();
			
	    }
		
    }
}

