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
		vector<int> c(n), l(n), r(n);
		for(int i=0; i<n; i++) cin>>l[i];
		for(int i=0; i<n; i++) cin>>r[i];
		for(int i=0; i<n; i++) cin>>c[i];
		sort(all(l));
		sort(all(r));
		sort(all(c));
		for(int la=0, lb=n-1, ra=0, rb=n-1;la<lb;){
			if(r[]l[la])
		}

	}
}
