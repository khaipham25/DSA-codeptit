#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
int n,a[100000];
int cot[1000],xuoi[10000],nguoc[10000];
int res;
void init(){
	cin>>n;
	for(int i=1;i<=n;++i)cot[i]=true;
	for(int i=1;i<2*n;++i){
		xuoi[i]=true;
		nguoc[i]=true;
	}
}
void in(){
	for(int i=1;i<=n;++i){
		cout<<"("<<i<<","<<a[i]<<")";
		cout <<endl;
	}
}
void Try(int i){
	for(int j=1;j<=n;++j){
		if(cot[j]==true && xuoi[i-j+n]==true && nguoc[i+j-1]==true){
			a[i]=j;cot[j]=false;
			xuoi[i-j+n]=false;nguoc[i+j-1]=false;
			if(i==n)res++;
			else {
			Try(i+1);
		    }
			cot[j]=true;xuoi[i-j+n]=true;nguoc[i+j-1]=true;
		}
	}
}
int main(){
	
	int t;cin>>t;
	while(t--){
		res=0;
		init();
	    Try(1);
	    cout <<res<<endl;
	}
}
