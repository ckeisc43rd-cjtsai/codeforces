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
		int n;cin>>n;
		vector<int> l(n);
		vector<int> r(n);
		for(int i=0; i<n; i++) cin>>l[i]>>r[i];
		int dl=0, dr=INT32_MAX;
		while(dr>dl){
			int mid=(dl+dr)/2;
			bool can=true;
			int rl=0, rr=0;
			for(int i=0; i<n; i++){
				//cout<<i;
				rl-=mid;rr+=mid;
				if(rl>r[i]){
					can=false; break;
				}else if(rr<l[i]){
					can=false; break;
				}
				rl=max(rl, l[i]);
				rr=min(rr, r[i]);
			}if(!can) dl=mid+1;
			else dr=mid;
		}cout<<dr<<'\n';
	}
}
