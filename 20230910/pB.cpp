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
		int n, k, a, b;cin>>n>>k>>a>>b;
		vector<int> x(n+1), y(n+1);
		int mina=INT32_MAX, minb=INT32_MAX;
		int inda, indb;
		for(int i=1; i<=n ;i++){
			int q, w;cin>>q>>w;
			x[i]=q;y[i]=w;
		}
		for(int i=1; i<=k; i++){
			if(abs(x[i]-x[a])+abs(y[i]-y[a])<mina){
				mina=abs(x[i]-x[a])+abs(y[i]-y[a]);
				inda=i;
			}	
			if(abs(x[i]-x[b])+abs(y[i]-y[b])<minb){
				minb=abs(x[i]-x[b])+abs(y[i]-y[b]);
				indb=i;
			}
		}
		int sx=abs(x[a]-x[indb])+abs(y[a]-y[indb])+abs(x[b]-x[indb])+abs(y[b]-y[indb]);
		int sy=abs(x[a]-x[inda])+abs(y[a]-y[inda])+abs(x[b]-x[inda])+abs(y[b]-y[inda]);
		cout<<min(abs(x[a]-x[b])+abs(y[a]-y[b]), min(mina+minb, min(sx, sy)))<<'\n';
	}
}
