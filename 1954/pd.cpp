#include <bits/stdc++.h>
#define pii pair<int, int>
#define ll long long
#define int long long
#define ff first
#define ss second
const ll modd=998244353;
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n;cin>>n;
	vector<int> cnt(6000, 0);
	cnt[0]=1;
	vector<ll> p2(n+10, 1);
	for(int i=1; i<n+3; i++) p2[i]=(p2[i-1]*2)%998244353;
	vector<int> li(n);
	for(int i=0; i<n; i++) cin>>li[i];
	sort(li.begin(), li.end());
	int ans=0;
	for(int k=0; k<n; k++) {
		int go=0;
		for(int i=5001; i>li[k]; i--){
			go+=cnt[i];
			go%=modd;
			ans+=cnt[i]*((i+li[k]+1)/2);
			cnt[i]+=cnt[i-li[k]];
			cnt[i]%=998244353;
		}
		cnt[li[k]]++;
		//cout<<p2[k]-go<<' ';
		ans=(ans+li[k]*(p2[k]-go))%998244353;
	}
	cout<<ans;


}
