#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

int main(){
	int t;cin>>t;
	while(t--){
		long n;cin>>n;
		long a[n],b[n];
		for(int i=0;i<n;++i)cin>>a[i];
		stack<int> st;
		long res=INT_MIN;
		long i=0;
		while(i<n){
			if(st.empty() or a[i]>=a[st.top()]){
				st.push(i);
				++i;
			}else{
				long idx=st.top();
				st.pop();
				//tinh toan hcn tao boi cot hien tai
				//cot hien tai la ngan nhat cua hcn do
				if(st.empty()){
					res=max(res,i*a[idx]);
				}else {
					res=max(res, a[idx]*(i-st.top()-1));
				}
			}
		}
		while(!st.empty()){
			long idx=st.top();
			st.pop();
//				tinh toan hcn tao boi cot hien tai
//				cot hien tai la ngan nhat cua hcn do
			if(st.empty()){
			res=max(res,i*a[idx]);
			}else {
				res=max(res, a[idx]*(i-st.top()-1));
			}
		}
		cout<<res<<endl;
	}
}

