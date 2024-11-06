#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
int n,k,a[1000000],ok=1;

void sinh(){
	int i=k;
	while(i>=1 && a[i]==n-k+i)--i;
	if(i==0)ok=0;
	else {
		a[i]++;
		for(int j=i+1;j<=k;j++)a[j]=a[j-1]+1;
	}
}
int check(vector<int> v){
	for(int i=1;i<k;++i){
		if(v[a[i]-1]>v[a[i+1]-1])return 0;
	}
	return 1;
}
int main(){
	int dem=0;
	cin>>n>>k;
	vector<int> v(n);
	for(int i=0;i<n;++i){
		cin>>v[i];
    }
    for (int i = 1; i <= k; ++i) {
        a[i] = i;
    }
  //  sort(v.begin(),v.end());
    while(ok){
    	if(check(v)==1)dem++;
    	sinh();
	}
	cout <<dem;
}

