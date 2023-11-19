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
		int n, q;cin>>n>>q;
		for(int i=1; i<n; i++){
			cout<<i<<' '<<i+1<<'\n';
		}
		int place=n-1;
		for(int i=0; i<q; i++){
			int d;cin>>d;
			if(d==place) cout<<"-1 -1 -1\n";
			else{
				cout<<n<<' '<<place<<' '<<d<<'\n';
				place=d;
			}
		}
	}
}
