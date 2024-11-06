#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n;string k;cin>>n;cin>>k;
		if(next_permutation(k.begin(),k.end()))cout <<n<<" "<<k<<endl;
		else cout <<n<<" "<<"BIGGEST"<<endl;
	}
}

