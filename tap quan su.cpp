#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
int n,k,a[1000000],ok=1;int b[1000005];

void sinh(){
	int i=k;
	while(i>=1 && a[i]==n-k+i)--i;
	if(i==0)ok=0;
	else {
		a[i]++;
		for(int j=i+1;j<=k;j++)a[j]=a[j-1]+1;
	}
}

int main(){
	int t;cin>>t;
	while(t--){
	    int dem=0;
	    cin>>n>>k;
	     for(int i=1;i<=k;++i){
		   cin>>a[i];
		   b[i]=a[i];
        }
        ok=1;
        sinh();
        for(int i=1;i<=k;++i){
    	    if(!binary_search(a+1,a+1+k,b[i]))dem++;
	    }
        if(ok==0)cout<<k<<endl;
        else cout<<dem<<endl;
    }
}

