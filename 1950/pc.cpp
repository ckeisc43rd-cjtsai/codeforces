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
		string s;cin>>s;
		int cool=(s[0]-'0')*10+(s[1]-'0');
		if(cool==0){
			cout<<12<<':'<<s[3]<<s[4]<<" AM\n";
		}
		else if(cool>12){
			if(cool-12<10) cout<<0;
			cout<<cool-12<<':'<<s[3]<<s[4]<<" PM\n";
		}else if(cool==12){
			cout<<s<<" PM\n";
		}else{
			cout<<s<<" AM\n";
		}
	}
}
