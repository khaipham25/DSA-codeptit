#include <bits/stdc++.h>
using namespace std;

void sapxep(int a[],int n){
	vector<int> v[10000];
	for(int i=0;i<n-1;++i){
		bool swaped=false;
		for(int j=i+1;j<n;++j){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
				swaped=true;
			}
			
		}
		if(swaped==true){
			for(int j=0;j<n;++j)v[i].push_back(a[j]);
		}
		
	}
	for(int i=n-2;i>=0;--i){
		cout <<"Buoc "<<i+1<<": ";
		for(int j=0;j<n;j++){
			cout << v[i][j]<<" ";
		}
		cout <<endl;
		
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
	    cin>>n;
	    int a[n];
        for(int i=0;i<n;++i)cin>>a[i];
	     sapxep(a,n);
	}
}
