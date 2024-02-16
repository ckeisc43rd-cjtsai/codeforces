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
		vector<int> num(n);
		for(int i=0; i<n; i++){
			int a;cin>>a;
			num[i]=a;
			li[i]={
				a, i
			};
		}
		sort(li.begin(), li.end());
		vector<int> ind(n);
		for(int i=0; i<n; i++){
			ind[li[i].ss]=i+1;
		}
		set<int> st;
		st.insert(n);
		int sum=li[0].ff;
		for(int i=1; i<n; i++){
			if(sum<li[i].ff) st.insert(i);
			sum+=li[i].ff;
		}
		for(int i=0 ;i<n; i++){
			cout<<(*st.lower_bound(ind[i]))-1<<' ';
		}cout<<'\n';
	}
}
