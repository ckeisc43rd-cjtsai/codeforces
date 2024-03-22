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
		vector<pii> li(n);
		for(int i=0; i<n; i++) {cin>>li[i].ff;li[i].ss=i+1;}
		vector<int> p(n+1);
		for(int i=1; i<=n; i++) cin>>p[i];
		sort(li.begin(), li.end(), greater<pii>());
		set<int> st;
		set<int> cant;
		int maxi=0;
		int ind;
		for(int j=0; j<n; j++){
			int i=li[j].ss;
			if(cant.count(i)) continue;
			st.insert(i);
			st.erase(p[st.size()-1]);
			cant.insert(p[st.size()-1]);
			if(li[j].ff*st.size()>maxi){
				maxi=li[j].ff*st.size();
				ind=st.size();
			}
		}
		cout<<maxi<<' '<<ind<<'\n';
	}
}
