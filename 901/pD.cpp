#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int mini=INT32_MAX, cnt=0;
		for(int i=0; i<n; i++){
			int a;cin>>a;
			if(a==0) cnt++;
			else if(a<mini) mini=a;
		}cout<<mini*cnt<<'\n';
	}
}
