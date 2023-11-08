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
		vector<int> li(n);
		for(int i=0; i<n; i++) cin>>li[i];
		vector<int> co(107, 0);
		for(int i=0; i<n; i++) co[li[i]]++;
		int a0=0, a1=0;
		for(int i=1; i<=100; i++){
			if(co[i]>=2){
				if(!a0) a0=i;
				else if(!a1) a1=i;
				else break;
			}
		}
		if(!a1){
			cout<<-1<<'\n';
			continue;
		}
		bool a0b=false, a1b=false;
		for(int i=0; i<n; i++){
			if(li[i]==a0){
				if(a0b) cout<<3<<' ';
				else{
					cout<<1<<' ';
					a0b=true;
				}
			}else if(li[i]==a1){
				if(a1b) cout<<2<<' ';
				else{
					cout<<1<<' ';
					a1b=true;
				}
			}else cout<<3<<' ';
		}cout<<'\n';
	}
}
