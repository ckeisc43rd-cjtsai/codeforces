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
		int tmp;cin>>tmp;//cout<<tmp<<' ';
		vector<int> ans;
		ans.push_back(tmp);
		for(int i=0; i<a-1; i++){
			int s;cin>>s;
			if(s>=tmp){
				ans.push_back(s);
			}else{
				ans.push_back(s);
				ans.push_back(s);
			}
			tmp=s;
		}
		cout<<ans.size()<<'\n';
		for(auto x:ans){
			cout<<x<<' ';
		}cout<<'\n';
	}
}
