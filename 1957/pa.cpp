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
		sort(li.begin(), li.end());
		int ans=0;
		for(int i=2; i<n; i++){
			if(li[i]==li[i-1]&&li[i-1]==li[i-2]){
				ans++;
				i+=2;
			}
		}
		cout<<ans<<'\n';
	}
}
