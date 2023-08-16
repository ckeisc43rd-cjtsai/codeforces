#include <iostream>
#include <vector>
using namespace std;
#define int long long
/*
---------------------
|this segment tree  |
|is zero-based      |
|and lclose ropen   |
|no lazy propagation|
---------------------
*/

struct segtree{
    vector<int> v;
    int L;
    segtree(int n):L(n), v(2*n){
        for(int i=n; i<2*n; i++){
            v[i]=0;
        }
        for(int i=n-1; i>0; i--){
            v[i]=v[2*i]+v[2*i+1];
        }
    }
    void addmodify(int t, int d){
        for(int i=t+L; i>0; i/=2) v[i]+=d;
    }
    void setmodify(int t, int d){
        int tmp=v[t+L]-d;
        for(int i=t+L; i>0; i/=2) v[i]-=tmp;
    }

    int sumquery(int l, int r){
        int ans=0;
        for(int dl=l+L, dr=r+L; dl<dr; dl/=2, dr/=2){
            //cout<<dl<<' '<<dr<<'\n';
            if(dl%2==1){
                ans+=v[dl];
                dl++;
            }
            if(dr%2==1){
                dr--;
                ans+=v[dr]; 
            }
        }
        return ans;
    }
    int minquery(int l, int r){
        int ans=INT32_MAX;
        for(int dl=l+L, dr=r+L; dl<dr; dl/=2, dr/=2){
            //cout<<dl<<' '<<dr<<'\n';
            if(dl%2==1){
                ans=min(ans, v[dl]);
                dl++;
            }
            if(dr%2==1){
                dr--;
                ans=min(ans,v[dr]); 
            }
        }
        return ans;
    }
    void test(){
        for(int i=1; i<2*L; i++) cout<<v[i]<<'\n';
    }
};

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		segtree st(n);
		int cnt=0;
		for(int i=0; i<n; i++){
			int r;cin>>r;r--;
			st.setmodify(r, 1);
			int tmp=st.sumquery(0, r);
			if(tmp%2==0&&tmp>0) cnt++;
		}cout<<cnt<<'\n';
	}
}
