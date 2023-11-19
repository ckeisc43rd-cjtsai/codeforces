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
		vector<int> pre(n+1), nxt(n+1);
		int last=0;
		int mini=INT32_MAX, maxi=INT32_MIN;
		for(int i=0; i<n; i++){
			int d;cin>>d;
			mini=min(mini, d);
			maxi=max(maxi, d);
			nxt[last]=d;
			pre[d]=last;
			last=d;
		}
		pre[n+1]=last;
		nxt[last]=n+1;
		bool suc=false;
		int i=0;
		for(; i<50*n; i++){
			if(nxt[0]==mini&&pre[n+1]==maxi){
				suc=true;
				for(int j=nxt[t]; j!=pre[n+1]; j=nxt[j]){
					if(j>nxt[t]){
						break;suc=false;
					}
				}
				if(suc) break;
			}
			int cur=nxt[0];
			int j;
			for(j=pre[n+1]; j>cur&&j!=0; j=pre[j]) ;
			nxt[0]=nxt[nxt[cur]];
			pre[nxt[cur]]=0;
			nxt[cur]=nxt[j];
			pre[cur]=j;
			pre[nxt[j]]=cur;
			nxt[j]=cur;
		}if(suc)cout<<i<<'\n';
		else cout<<"-1\n";
	}
}
