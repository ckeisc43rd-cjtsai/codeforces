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
		int a;cin>>a;
		int ans=0;
		int oc=0;
		for(int i=0; i<a; i++){
			int d;cin>>d;
			ans+=d;
			if(d%2) oc++;
			if(i==0){
				cout<<d<<' ';
				continue;
			}
			cout<<ans-((oc)/3)-((!(oc%3))?0:((oc%3)%2))<<' ';
		}cout<<'\n';
	}
}
