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
		string a, b;cin>>a>>b;
		int pt=0;
		int ind=0;
		for(int i=0; i<n; i++){
			while(pt<m) {
				//cout<<a[i]<<' '<<b[pt]<<'\n';
				if(a[i]==b[pt]){
					ind++;
					pt++;
					break;
				}
				pt++;
			}
			if(pt==m) break;
		}
		cout<<ind<<'\n';
	}
}
