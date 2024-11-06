#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
void sapxep(int a[],int n){
	vector<int> v[10000];
	for(int i=0;i<n-1;++i){
		
		swap (a[i],*min_element(a+i,a+n));
		for(int j=0;j<n;++j)v[i].push_back(a[j]);
    }
    for(int i=n-2;i>=0;--i){
    	cout<<"Buoc "<<i+1<<": ";
    	for(int j=0;j<n;++j)cout <<v[i][j]<<" ";
    	cout <<endl;
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
    for(int i=0;i<n;++i)cin>>a[i]; 
	sapxep(a,n);
}
