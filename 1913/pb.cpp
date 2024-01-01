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
		int a=0, b=0;
		for(int i=0; i<n.size(); i++){
			if(n[i]=='0') a++;
			else b++;
		}
		if(a==b) cout<<0;
		else{
			for(int i=0; i<n.size(); i++){
				if(n[i]=='0') b--;
				else a--;
				if(a<0||b<0){ cout<<n.size()-i;
				break;}
			}
		}
		cout<<'\n';
	}

}
