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
		int n;cin>>n;	
		for(int i=1; i<=(n)/2; i++) cout<<i<<' '<<i+(n)/2<<' ';
		if(n%2) cout<<n;
		cout<<'\n';
	}
}
