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
		vector<int> li(n);
		for(int i=0; i<n; i++) cin>>li[i];
		int ans=0;
		int mini=li[n-1];
		for(int i=n-2; i>=0; i--){
			if(li[i]==1){
				mini=1;
				continue;
			}
			int l=1, r=INT32_MAX;
			bool se=false;
			while(r>l){
				int mid=(l+r)/2;
				int sss=li[i]/mid;
				if(sss*mid==li[i]&&sss==mini){
					l=mid;//cout<<"ss";
					se=true;
					break;
				}
				if((li[i]/mid>=mini)) l=mid+1;
				else r=mid;
			}
			mini=li[i]/l;
			//cout<<i<<' '<<l<<' '<<mini<<' ';
			ans+=l-1;
			//cout<<mini<<' '<<ans<<'\n';
		}cout<<ans<<'\n';
	}
}
