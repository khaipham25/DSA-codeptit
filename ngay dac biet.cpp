#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;
string a[5];
string day[] = {"02", "20", "22"};
string yea[] = {"2000", "2002", "2020", "2022", "2200", "2202", "2220", "2222"};
void Try(int i){
	if(i==1){
		for(int j=0;j<3;++j){
			a[i]=day[j];
			Try(i+1);
		}
	}
	else if(i==2){
		a[i]="02";
		Try(i+1);
	}
	else {
		for(int j=0;j<8;++j){
			a[i]=yea[j];
			cout<<a[1]<<"/"<<a[2]<<"/"<<a[3]<<"\n";
		}
	}
}
int main(){
	Try(1);
}

