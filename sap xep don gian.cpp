#include <bits/stdc++.h> 
using namespace std; 
int main() {
    int n; cin >> n; 
	int a[100005]; int dp[100005]={0};
	int res = 0; 
	for (int i = 1; i <= n; ++i) { 
	    cin >> a[i]; 
		dp[a[i]] = dp[a[i]-1] + 1; 
		res = max(res, dp[a[i]]); 
	} 
	cout << n-res << "\n"; 
 }
