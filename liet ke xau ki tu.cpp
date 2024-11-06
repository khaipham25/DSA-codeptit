#include <bits/stdc++.h>
using namespace std;
int n,k,ok;string a="";char c;
void sinh(){
	int i=k-1;
	while(i>=0&&a[i]==c)i--;
	if(i==-1)ok=0;
	else {
		a[i]++;
		for(int j=i+1;j<k;++j)a[j]=a[j-1];
	}
}
int main(){
	cin>>c>>k;
	for(int i=0;i<k;++i)a=a+'A';
	ok=1;
	while(ok){
		cout <<a;
		sinh();
		cout <<endl;
		
	}
	

}

