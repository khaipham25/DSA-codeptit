#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
int n,k,a[100005],ok,s;int dem;
vector<string> v;
bool nt(int a){
	for(int i=2;i<=sqrt(a);++i){
		if(a%i==0)return false;
	}return a>1;
}
void inkq(){
	int sum=0;
	string str="";
	for(int i=1;i<=k;++i){
		if(nt(a[i])){
			sum=sum+a[i];
			str=str+to_string(a[i])+" ";
		}
		else return;
	}
	if(sum==s){
		dem++;
		v.push_back(str);
		
	}
}
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;++j){
		a[i]=j;
		if(i==k)inkq();
		else Try(i+1);
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>k>>n>>s;
		v.clear();
		for(int i=1;i<=n;++i)a[i]=i;
	//	if(n==0 and k==0 and s==0)break;
		dem=0;
		Try(1);
		cout <<dem<<endl;
	}
}

