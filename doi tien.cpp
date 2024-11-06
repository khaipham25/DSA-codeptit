#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	long a[30];
	long n,k;cin>>n>>k;long dem=0;
	for(int i=0;i<n;++i)cin>>a[i];
	sort(a,a+n,greater<long>());
	int ok=0;
	for(int i=0;i<n;++i){
		k=k-a[i];
		dem++;
		if(k==0){
			ok=1;
			cout<<dem;
			break;
		}
		if(k<0){
			k=k+a[i];
			dem--;
		}
	}
	if(!ok)cout <<"-1";
}
