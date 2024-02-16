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
		int a, b;cin>>a>>b;
		int tmp=__gcd(a, b);
		if(a==1) cout<<b*b<<'\n';
		else if(!(b%a))cout<<(b/a)*a*b/tmp<<'\n';
		else cout<<a*b/tmp<<'\n';
	}
}
