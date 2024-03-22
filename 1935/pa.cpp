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
		string s;cin>>s;
		string d=s;
		reverse(d.begin(), d.end());
		int a=s.size()/2;
		bool tb=true;
		for(int i=0; i<a; i++){
			if(s[i]<d[i]){tb=false;break;}
			else if(s[i]>d[i]){
				break;
			}
		}//cout<<tb;
		if(s==d) cout<<s<<'\n';
		else if(tb){
			if(n%2){
				cout<<d;
			}else cout<<d<<s;
			cout<<'\n';
		}else{
			if(n%2) cout<<s<<d;
			else cout<<s;
			cout<<'\n';
		}
	}
}
