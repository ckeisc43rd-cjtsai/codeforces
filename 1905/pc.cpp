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
		string s;cin>>s;
		vector<char> z(n);
		for(int i=0; i<n; i++) z[i]=s[i];
		vector<pair<char, int>> lds;
		int now=0;
		for(char i='z'; i>='a'; i--){
			for(int j=now; j<n; j++){
				if(s[j]==i){
					lds.pb({i, j});
					now=j+1;
				}
			}
		}
		int tmp=lds.size();
		for(int i=0; i<(int)lds.size(); i++){
			z[lds[tmp-i-1].ss]=lds[i].ff;
		}
		int tpp=tmp;
		for(int i=0; i<tpp-1; i++){
			if(lds[i].ff==lds[i+1].ff)tmp--;
			else break;
		}

		bool det=true;
		for(int i=1; i<n; i++){
			if(z[i]<z[i-1]) det=false;
		}
		if(det) cout<<tmp-1;
		else cout<<"-1";
		cout<<'\n';

	}

}
