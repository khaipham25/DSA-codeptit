#include <bits/stdc++.h>
using namespace std;
int n,k,ok;int a[100000],b[100000];

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
		cin>>n>>k;int dem=1;
		vector<int> v1(k+1),v2(k+1);
		for(int i=1;i<=k;i++){
			cin>>b[i];
			a[i]=i;
		}
		for(auto y:b)v2.push_back(y);
		ok=1;
		while(ok){
			for(auto x:a)v1.push_back(x);
			if(v1!=v2){dem++;
			v1.clear();
			sinh();
			}else break;
		}
		cout <<dem<<endl;
	}
}

