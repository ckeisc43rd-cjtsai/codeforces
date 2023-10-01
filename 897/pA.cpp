#include <iostream>
#include <algorithm>
#include <vector>
#define pii pair<int, int>
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<pii> li(n);
		for(int i=0; i<n; i++) {
			int a;cin>>a;
			li[i]={
				a, i
			};
		}
		sort(li.begin(), li.end());

		vector<int> ans(n);
		for(int i=0; i<n; i++){
			ans[li[i].second]=n-i;
		}
		for(int i=0; i<n; i++) cout<<ans[i]<<' ';
		cout<<'\n';
	}
}
