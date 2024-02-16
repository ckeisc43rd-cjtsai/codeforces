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
		string a;cin>>a;
		set<char> st;
		int ans=0;
		for(int i=0; i<n; i++){
			st.insert(a[i]);
			ans+=st.size();
		}cout<<ans<<'\n';
	}
}
