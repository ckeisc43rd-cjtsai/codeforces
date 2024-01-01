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
	int t;cin>>t;
	while(t--){
		string n;cin>>n;
		int s=n[0]-'0';
		int fin;
		for(int i=1; i<n.size();i++){
			if(n[i]=='0'){
				s*=10;
			}else{
				fin=i;
				break;
			}
		}
		int r=0;
		for(int i=fin; i<n.size(); i++){
			r*=10;
			r+=n[i]-'0';
		}
		if(s<r) cout<<s<<' '<<r;
		else cout<<-1;
		cout<<'\n';
	}

}
