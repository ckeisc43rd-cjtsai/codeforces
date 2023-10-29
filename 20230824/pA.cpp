#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int a;cin>>a;
	while(a--){
		int n, m;cin>>n>>m;
		vector<vector<int> > has(m, vector<int>(4, 0));
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				char t;cin>>t;
				if(t=='v'){
					has[j][0]=1;
				}else if(t=='i'){
					has[j][1]=1;
				}else if(t=='k'){
					has[j][2]=1;
				}else if(t=='a'){
					has[j][3]=1;
				}
			}
		}
		int det=0;
		for(int i=0; i<m; i++){
			if(has[i][det]) det++;
			if(det==4) break;
		}
		if(det==4) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
