#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;

int fp(int n, int m){
	if(m==0) return 1;
	if(m==1) return n;
	int tmp=fp(n, m/2);
	if(m%2) return tmp*tmp*n;
	else return tmp*tmp;
}

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<vector<int>> st(n+2, vector<int>(20, 0 ));
		for(int i=1; i<=n; i++){
			cin>>st[i][0];
		}
		for(int i=1; i<20; i++){
			for(int j=1; j<=n; j++){
				int tmp=j+fp(2, i-1);
				if(tmp>n) continue;
				st[j][i]=st[j][i-1]+st[tmp][i-1];
			}
		}
		int q;cin>>q;
		while(q--){
			int l, u;cin>>l>>u;
			int sum=0;l;int kl=l;
			while(sum<u){
				if(sum+st[l][0]>u) break;
				for(int i=19; i>=0; i--){
					int tmp=l+fp(2, i);
					if(tmp>n+1) continue;
					if(st[l][i]+sum<=u){
						sum+=st[l][i];
						l=tmp;
					}
					if(l>n) break;

				}if(l>n) break;
			}//cout<<l<<' ';continue;
			if(l>n)l=n;

			int a=abs(sum-u), b=abs(st[l][0]+sum-u);
		
			if(a<b){
	if(l==kl) l++;
				cout<<l-1<<' ';
			}else{
				cout<<l<<' ';
			}
		}cout<<'\n';
	}
}
