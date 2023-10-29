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
		int a, b;cin>>a>>b;
		string as, bs;cin>>as>>bs;
		bool ag=true, bg=true;
		bool bcandt0=false, bcandt1=false;
		bool ahas00=false, ahas11=false;
		for(int i=1; i<b; i++) if(bs[i]==bs[i-1]) bg=false;
		for(int i=1; i<a; i++){
			if(as[i]==as[i-1]){
				ag=false;
				if(as[i]=='0') ahas00=true;
				else ahas11=true;
			}
		}
		if(bs[0]=='0'&&bs[b-1]=='0') bcandt1=true;
		else if(bs[0]=='1'&&bs[b-1]=='1') bcandt0=true;
		if(ag){
			cout<<"Yes\n";
		}else if(ahas00&&ahas11){
			cout<<"No\n";
		}else if(ahas00){
			if(bg&&bcandt0){
				cout<<"Yes\n";
			}else{
				cout<<"No\n";
			}
		}else if(ahas11){
			if(bg&&bcandt1){
				cout<<"Yes\n";
			}else{
				cout<<"No\n";
			}
		}
	}
}
