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
		int n, k, b, s;cin>>n>>k>>b>>s;
		vector<int> a(n), p(n);
		for(int i=0; i<n; i++) cin>>p[i];
		for(int i=0; i<n; i++) cin>>a[i];
		int mb=0;
		int bc=0;
		int cnt=0;
		for(int i=b;cnt<k &&cnt<n+10; i=p[i-1]){
			mb=max(mb, bc+a[i-1]*(k-cnt));
			bc+=a[i-1];
			cnt++;
		}//cout<<'\n';
		int ms=0;
		cnt=0;
		bc=0;
		for(int i=s;cnt<k&&cnt<n+10 ; i=p[i-1]){
			ms=max(ms, bc+a[i-1]*(k-cnt));
			bc+=a[i-1];
			cnt++;
		}//cout<<mb<<' '<<ms<<' ';
		//cout<<'\n';
		cout<<(ms==mb?"Draw":ms>mb?"Sasha":"Bodya")<<'\n';
	}
}
