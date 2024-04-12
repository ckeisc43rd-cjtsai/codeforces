#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n, m;cin>>n>>m;
		if(n==m){
			for(int i=0; i<n; i++) cout<<1<<' ';
			cout<<'\n';
		}else if(m==1){
			cout<<1<<' ';
			for(int i=1; i<n; i++) cout<<2<<' ';
			cout<<'\n';
		}else{
			cout<<"-1\n";
		}
	}
}
