#include <bits/stdc++.h>
using namespace std;
int n,ok,a[100000];
void ktao(){
	for(int i=1;i<=n;++i){
		a[i]=0;
	}
}
void sinh(){
     int i=n;
    while(i>=1 && a[i]==1){
    	a[i]=0;i--;
	}
	if(i==0)ok=0;
	else a[i]=1;
}
bool check(){
	int dem=0;
	if(n<6)return false;
	for(int i=1;i<n;++i){
		if(a[i]==1 && a[i+1]==1 )return false;
	}
	for(int i=1;i<=n;++i){
		if(a[1]!=1 || a[n]!=0)return false;
		
		if(a[i]==0)dem++;else dem=0;
	}
	if (dem>=4)return false;
	return true;
}
int main(){
	cin>>n;
	ktao();
	ok=1;
	while(ok){
		if(check()==true){
			for(int i=1;i<=n;++i){
				if(a[i]==1)cout <<"8";
				else cout <<"6";
			}
			cout <<endl;
			
		}sinh();
	}
}
