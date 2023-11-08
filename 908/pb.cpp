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
		string s;cin>>s;
		int win=(s[n-1]=='A'?0:1);//cout<<win;
		bool can=false;
		for(int i=1; i<=n; i++){
			int cur=0;
			int apt=0;
			int bpt=0;
			int as=0;
			int bs=0;
			int winner=2;
			while(cur<n){
				if(s[cur]=='A') apt++;
				else bpt++;
				if(apt==i) {
					as++;
					apt=0;
					bpt=0;
				}
				if(bpt==i){
					bs++;
					bpt=0;
					apt=0;
				}
				cur++;
			}

			if(win==0) if(apt!=0) continue;
			if(win==1) if(bpt!=0) continue;
			if(as>bs) winner=0;
			else if(bs>as) winner=1;
			if(winner==win) can=true;
		}if(can) cout<<(win==1?"B":"A");
		else cout<<-1;
		cout<<'\n';
	}
}
