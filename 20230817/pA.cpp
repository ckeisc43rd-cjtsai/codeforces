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
		string a;cin>>a;
		int la=a.size();
		//char tmp=la[0];
		int cnt=0;
		for(int i=1; i<la; i++){
			if(a[i-1]!=a[i]) cnt++;
		}
		if(cnt==1||cnt==0){
			if(a=="()"){
				cout<<"NO\n";
			}else if(a==")("){
				cout<<"YES\n(())\n";
			}else{
				cout<<"YES\n";
				for(int i=0; i<la; i++) cout<<"()";
				cout<<'\n';
			}
		}else{
			cout<<"YES\n";
			for(int i=0; i<la; i++) cout<<'(';
			for(int i=0; i<la; i++) cout<<')';
			cout<<'\n';
		}
	}
}
