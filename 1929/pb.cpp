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
		if(m==(4*n-2)) cout<<2*n<<'\n';
		else cout<<(m+1)/2<<'\n';
	}
}
