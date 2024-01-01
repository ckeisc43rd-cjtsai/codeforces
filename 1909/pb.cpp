#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define pb push_back
#define all(x) x.begin(),x.end()
#define ff first
#define ss second

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> li(n);
		for(int i=0; i<n; i++) cin>>li[i];
		int d=2;
		while(true){
			set<int> st;
			for(int i=0; i<n; i++)st.insert(li[i]%d);
			if(st.size()==2){
				cout<<d<<'\n';
				break;
			}else d*=2;
		}
	}
}
