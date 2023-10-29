#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> pre(n+1);
		vector<int> val(n+1);
		int sum=0;
		pre[0]=0;
		for(int i=1; i<=n; i++){
			int a;cin>>a;
			val[i]=a;
			sum=sum^a;
			pre[i]=pre[i-1]^a;
		}
		string s;
		cin>>s;
		int ans=0;
		for(int i=0; i<n; i++){
			if(s[i]=='0') ans=ans^val[i+1];
		}
		int q;cin>>q;
		while(q--){
			int d;cin>>d;
			if(d==1){
				int l, r;cin>>l>>r;
				int tmp=pre[l-1]^pre[r];
				ans=ans^tmp;
			}else{
				int aa;cin>>aa;
				if(!aa) cout<<ans<<' ';
				else cout<<(ans^sum)<<' ';
			}
		}cout<<'\n';
	}
}
