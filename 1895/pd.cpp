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
	int abc=0;
	vector<int> bla(n);
	for(int i=0; i<n; i++) abc^=i;
	int in=0;
	for(int i=1; i<n; i++) {
		int a;cin>>a;
		bla[i]=a;
		in^=a;
	}
	int det=false;
	for(int i=0; i<n; i++){
		if((abc^i^in)==i){
			int cur=i;
			set<int> li;
			vector<int> ans(n+1);
			li.insert(i);
			ans[n]=i;
			det=true;
			for(int j=n-1; j>=1; j--){
				cur=bla[j]^cur;
				if(li.count(cur)){det=false; break;}
				li.insert(cur);
				ans[j]=cur;
			}
			if(det){
				for(int j=1; j<=n; j++){
					cout<<ans[j]<<' ';
				}return 0;
			}
		}
	}

}
