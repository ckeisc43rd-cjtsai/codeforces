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
		int a, b, c;cin>>a>>b>>c;
		if(a-((a-1)/b+1)>c) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
