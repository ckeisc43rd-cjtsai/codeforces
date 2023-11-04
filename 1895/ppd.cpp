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
	int n;cin>>n;
	vector<int> li(n), pre(n, 0);
	for(int i=1; i<n; i++){
		int a;cin>>a;
		li[i]=a;
		pre[i]=pre[i-1]^a;
	}
	int abc=0;
	for(int i=0; i<n; i++) abc^=i;
	int bla=0;
	vector<int> ans(n);
	for(int i=0; i<n;i++) bla^=pre[i];
	int kk=bla^abc;
	if(n%2){
		for(int i=0; i<n; i++){
			if((kk^i)==i){
				ans[0]=i;
				break;
			}
		}
	}else ans[0]=0;
	for(int i=1; i<n; i++){
		ans[i]=ans[i-1]^li[i];
	}
	for(int i=0; i<n; i++) cout<<ans[i]<<' ';

}
