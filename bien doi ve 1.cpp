#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
int n;
int ans;
void Try(int n,int dem){
//	ans=0;
	if(n==1){
		ans=min(ans,dem);
	}
	if(n%3==0 and dem+1<ans)Try(n/3,dem+1);
	if(n%2==0 and dem+1<ans)Try(n/2,dem+1);
	if(dem+1<ans)Try(n-1,dem+1);
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		ans=n;
		Try(n,0);
		cout <<ans<<endl;
	}
}

