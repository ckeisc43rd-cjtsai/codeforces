#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define lc(i) (i<<1)
#define rc(i) (i<<1^1)

typedef long long ll;
string st;
struct SegmentTree {
    int L;
    vector<ll> v, sz, tag, ans, now;

    SegmentTree(int N): L(N), v(L << 1), sz(L << 1, 1), tag(L << 1), ans(L<<1) , now(L<<1){
        for (int i = N; i < (N << 1); i++) {cin >> v[i];now[i]=s[i]-'0';}
		for(int i=N; i<(N<<1); i++) ans[i]=v[i]*(s[i-N]-'0');
        for (int i = N - 1; i > 0; i--) {
            v[i] = v[lc(i)] + v[rc(i)];
			ans[i]=ans[lc(i)]+ans[vc(i)];
            sz[i] = sz[lc(i)] + sz[rc(i)];
        }
    }

    void update(int i) {
        //v[i] += d * sz[i];
        tag[i] += 1;
    }

    void pull(int i) {
        for (int h = __lg(L) + 1; h; h--) {
            int p = i >> h;
            if (tag[p]) {
                update(lc(p), tag[p]);
                update(rc(p), tag[p]);
                tag[p] = 0;
            }
        }
    }

    void push(int i) {
        for (i >>= 1; i; i >>= 1) {
            v[i] = v[lc(i)] + v[rc(i)] + tag[i] * sz[i];
        }
    }

    void modify(int l, int r, ll d) {
        int dl = l + L, rr = r + L - 1;
        pull(dl), pull(rr);
        for (l += L, r += L; l < r; l >>= 1, r >>= 1) {
            if (l & 1) update(l++, d);
            if (r & 1) update(--r, d);
        }
        push(dl), push(rr);
    }

    ll query(int l, int r) {
        ll sum = 0;
        pull(l + L), pull(r + L - 1);
        for (l += L, r += L; l < r; l >>= 1, r >>= 1) {
            if (l & 1) sum += v[l++];
            if (r & 1) sum += v[--r];
        }
        return sum;
    }
};

signed main(){
int t;cin>>t;
}
