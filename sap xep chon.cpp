#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
void sapxep(int a[],int n){
	for(int i=0;i<n-1;++i){
		int k=i;
		for(int j=i+1;j<n;++j){
			if(a[j]<a[k])k=j;
		}
		swap (a[i],a[k]);//*min_element
		cout<<"Buoc "<<i+1<<": ";
		for(int j=0;j<n;++j)cout <<a[j]<<" ";
		cout<<endl;
    }
}
int main(){
	int n;
	cin>>n;
	int a[n];
    for(int i=0;i<n;++i)cin>>a[i]; 
	sapxep(a,n);
}

