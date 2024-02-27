#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;
#define lc(i) (i<<1)
#define rc(i) (i<<1^1)

typedef long long ll;

struct SegmentTree {
	int L;
	vector<ll> v;

	SegmentTree(int N): L(N), v(L << 1, 0) {}

	void modify(int i, ll d) {
		for (i += L; i; i >>= 1) v[i] += d;
	}

	ll query(int l, int r) {
		ll sum = 0;
		for (l += L, r += L; l < r; l >>= 1, r >>= 1) {
			if (l & 1) sum += v[l++];
			if (r & 1) sum += v[--r];
		}
		return sum;
	}
} ;
signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		SegmentTree st(n);
		vector<int> li(n), nxt(n+1), pre(n+1);
		for(int i=0; i<n; i++) {
			cin>>li[i];
			nxt[i]=i+1;
			pre[i]=i-1;
		}
		int now=n-1;
		set<int> ans;
		ans.insert(li[0]+1);
		while(true){cout<<now<<' ';
			if(now==0){
				if(nxt[now==n&&pre[now]==-1]) break;
				else {
					st.modify(now, 1);
					pre[nxt[now]]=pre[now];
					now=nxt[now];
				}
			}
			if(nxt[now]==n&&pre[now]==-1) {
				ans.insert(li[now]+1);
				break;
			}
			if(pre[now]==-1){
				//int a=st.query(0, now);//cout<<a;
				ans.insert(li[now]+1);
				st.modify(now, 1);
				pre[nxt[now]]=pre[now];
				now=nxt[now];
			}else{
				int a=st.query(0, now);
				if(ans.count(li[now]+now-a+1)) now=pre[now];
				else{
					ans.insert(li[now]+now-a+1);
					st.modify(now, 1);
					int nxtd=nxt[now], pred=pre[now];
					pre[nxtd]=pred;
					nxt[pred]=nxtd;
					if(nxt[now]!=n)now=nxt[now];
					else now=pre[now];}
			}
		}
		vector<int> ansi;
		for(int x:ans) ansi.push_back(x);
		for(int x=ansi.size()-1; x>=0; x--) cout<<ansi[x]<<' ';
		cout<<'\n';
	}
}
