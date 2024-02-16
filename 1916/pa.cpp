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
		int a, b;cin>>a>>b;
		int s=2023;
		bool can=true;
		for(int i=0; i<a; i++){
			int tp;cin>>tp;
			if(s%tp){
				can=false;
			}else{
				s/=tp;
			}
		}
		if(!can) cout<<"NO\n";
		else{
			vector<int> ans;
			while(s!=1){
				for(int i=2; i<=2023; i++){
					if(!(s%i)){
						ans.push_back(i);
						s/=i;
						break;
					}
				}
			}
			cout<<"YES\n";
			if(ans.size()<b){
				for(int x:ans) cout<<x<<' ';
				for(int i=ans.size(); i<b; i++) cout<<1<<' ';
				cout<<'\n';
			}else{
				//for(int x:ans) cout<<x<<' ';
				int tmp=ans.size();
				for(int i=0; i<b-1; i++) cout<<ans[i]<<' ';
				int ansi=1;
				for(int i=b-1; i<tmp; i++) ansi*=ans[i];
				cout<<ansi<<'\n';
			}
		}
	}
}
