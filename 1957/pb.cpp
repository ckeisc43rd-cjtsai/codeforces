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
		int n, k;cin>>n>>k;
		if (n == 1) cout << k << '\n';
		else {
			int ans = pow(2, (int)log2(k)) - 1;
			cout << ans << ' ' << k - ans<<' ';
			for(int i=2; i<n; i++) cout<<0<<' ';
			cout<<'\n';
		} 
	}
}
