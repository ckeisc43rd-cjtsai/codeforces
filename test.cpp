#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int t;cin>>t;
	while(t--){
		int a, b;cin>>a>>b;
		//a<<=32;
		if((a<<32)%b) {cout<<-1<<'\n'; continue;}
		int cnt=0;
		while(a){
			if(a<b)	{cnt+=a;a<<=1;}
			else{a%=b;}
		}cout<<cnt<<'\n';
	}
}
