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
		int a, b, c;cin>>a>>b>>c;
		if((b-a)<(c*(c-1)/2)){
			cout<<-1<<'\n';
		}else{
			int d=b-a;
			vector<int> ans;
			int tmp=1;
			ans.push_back(b);
			for(int i=0; i<c-2; i++){
				b-=tmp;
				ans.push_back(b);
				tmp++;
			}
			ans.push_back(a);
			for(int i=c-1; i>=0; i--){
				cout<<ans[i]<<' ';
			}cout<<'\n';
		}
	}
}
