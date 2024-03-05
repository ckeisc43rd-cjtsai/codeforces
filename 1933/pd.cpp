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
		bool suc=true;
		if(li[0]==li[1])suc=false;
		if(suc==false){
			for(int i=2; i<n; i++) if(li[i]%li[0]) suc=true;
		}
		cout<<(suc?"YES\n":"NO\n");
	}
}
