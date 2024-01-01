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
	vector<int> p(40, 1);
	for(int i=1; i<35; i++){
		p[i]=p[i-1]*2;
	}
	vector<int> amo(40, 0);
	while(t--){
		int a, b;cin>>a>>b;
		if(a==1){
			amo[b]++;
		}else{
			for(int i=32; i>=0; i--){
				if(b>=p[i]){
					int tmp=b/p[i];
					int tpp=min(tmp, amo[i]);
					b-=tpp*p[i];
				}
				if(b==0) break;
			}
			if(b==0) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}

}
