#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i)cin>>a[i];
	sort(a,a+n,greater<int>());
	long long ans = max(a[0] * a[1], max(a[0] * a[1] * a[n - 1], max(a[n - 1] * a[n - 2], max(a[n - 1] * a[n - 2] * a[n - 3],a[0]*a[1]*a[2]))));
	cout <<ans;
}
