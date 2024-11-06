#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
int dx[8]={-1,0,0,1,-1,-1,1,1};
int dy[8]={0,-1,1,0,-1,1,-1,1};
char a[1005][1005];int n,m;
void DFS(int i,int j){
	a[i][j]='.';
	for(int k=0;k<8;++k){
	    int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=0 and j1>=0 and j1<m and i1<n and a[i1][j1]=='W')
		DFS(i1,j1);	
	}
}
int main(){

		int dem=0;
		cin>>n>>m;
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				cin>>a[i][j];
			}
		}
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				if(a[i][j]=='W'){
					dem++;
					DFS(i,j);
				}
			}
		}
		cout <<dem<<endl;
	
}

