#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define pb push_back
#define all(x) x.begin(),x.end()
#define ff first
#define ss second

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> l(n), c(n);
		vector<pii> r(n);
		for(int i=0; i<n; i++) cin>>l[i];
		for(int i=0; i<n; i++) {cin>>r[i].ff;r[i].ss=l[i];}
		for(int i=0; i<n; i++) cin>>c[i];
		sort(all(r), [&]( pii &a,  pii &b){
			if(!(a.ff-b.ss+b.ff-a.ss > a.ff+b.ff-a.ss-b.ss)&&(a.ff>=b.ss)&&(b.ff>a.ss)){
				swap(a.ss, b.ss);
				return false;
			}else{
			return true;
			}

			});
		sort(all(c), less<int>());
		int ans=0;
		vector<int> v(n);
		for(int i=0; i<n; i++){
				v[i]=(r[i].ff-r[i].ss);
		}
		sort(all(v), greater<int>());
		for(int i=0; i<n; i++) ans+=v[i]*c[i];
		cout<<ans<<'\n';
	}
}
