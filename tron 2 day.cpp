#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		vector<int> a(n + m);
		for (int i = 0; i < n + m; i++)
			cin >> a[i];
		sort(a.begin(), a.end());
		for (int i = 0; i < n + m; i++)
			cout << a[i] << " ";
		cout << endl;
	}
}
