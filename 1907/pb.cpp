#include <bits/stdc++.h>
#define pii pair<char, int>
#define int long long
#define ff first
#define ss second
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		string n;cin>>n;
		vector<pii> up, low;
		for(int i=0; i<n.size(); i++){
			char x=n[i];
			if(x=='b') {if(!low.empty()) low.pop_back();}
			else if(x=='B') {if(!up.empty())up.pop_back();}
			else{
				if(x<'a') up.push_back({x, i});
				else low.push_back({x, i});
			}
		}
		int l=0, r=0;
		while(true){
			if(low.size()==l){
				if(up.size()==r){
					break;
				}else{
					cout<<up[r].ff;
					r++;
				}
			}else if(up.size()==r){
				cout<<low[l].ff;
				l++;
			}else{
				if(low[l].ss<up[r].ss){
					cout<<low[l].ff;
					l++;
				}else{
					cout<<up[r].ff;
					r++;
				}
			}
		}cout<<'\n';
	}
}
