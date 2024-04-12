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
		int a, b,c;cin>>a>>b>>c;
		if(2*a+b!=a+b+c-1){
			cout<<-1<<'\n';
			continue;
		}
		int ans=0;
		ans+=b/c;
		b%=c;
		int left=c-b;
		int noo=c;
		int cnt=0;
		if(b) {
			ans++;
	
			a-=left/2;
			noo=b+left/2+left%2;
		}
		while(a){
			a-=(noo)/2;
			noo=noo/2+noo%2;
			ans++;
		}cout<<ans<<'\n';
	}
}
