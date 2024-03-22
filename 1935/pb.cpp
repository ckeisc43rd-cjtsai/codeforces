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
		vector<int> li(n), ap(n+1);
		for(int i=0; i<n; i++){
			cin>>li[i];
			ap[li[i]]=1;
		}
		int det=n;
		for(int i=0; i<n; i++){
			if(ap[i]==0){
				det=i;
				break;
			}
		}
		if(det==n){
			cout<<-1<<'\n';
			continue;
		}
		vector<pii> ans;
		set<int> tp;
		for(int i=0; i<n; i++){
			if(li[i]<det) tp.insert(li[i]);
			if(tp.size()==det){
				if(ans.empty()){
					ans.push_back({1, i+1});
				}else{
					ans.push_back({ans[ans.size()-1].ss+1, i+1});
				}
				tp.clear();
			}
		}
		if(ans.size()<2) cout<<-1<<'\n';
		else{
			cout<<ans.size()<<'\n';
			for(auto [u, x]:ans){
			if(x==ans[ans.size()-1].ss)	cout<<u<<' '<<n<<'\n';
			else cout<<u<<' '<<x<<'\n';
			}
		}
		
	}
}
