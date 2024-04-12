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
		set<int> st;
		vector<int> li(n);
		for(int i=0; i<n; i++){
			int a;cin>>a;
			li[i]=a;
			st.insert(i);
		}st.insert(n);
		vector<int> ans(n);
		for(int i=0; i<n; i++){
			int tmp=li[i];
			int nm=*st.begin();
			st.erase(nm);
			int nm2=*(st.begin());
			st.insert(nm);
			if(tmp==1){
				ans[i]=nm;
				st.erase(nm);
			}else if(nm2-nm==tmp){
				ans[i]=nm;
				st.erase(nm);
			}else{
				ans[i]=nm-tmp;
				st.erase(nm-tmp);
			}
		}
		for(int i=0; i<n; i++){
			cout<<ans[i]<<' ';
		}cout<<'\n';
	}
}
