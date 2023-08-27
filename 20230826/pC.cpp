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
		int a;cin>>a;
		vector<int> ans;
		ans.push_back(a);
		while((a&(-a))!=a){
			int tmp=a&(-a);
			a-=tmp;
			ans.push_back(a);
		}
		while(a>1){
			a/=2;
			ans.push_back(a);
		}
		cout<<ans.size()<<'\n';
		for(int x:ans) cout<<x<<' ';
		cout<<'\n';
	}
}
