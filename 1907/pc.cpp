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
		vector<int> c(39, 0);
		for(int i=0; i<s.size(); i++){
			c[s[i]-'a']++;
		}
		int maxi=0;
		for(int i=0; i<30; i++) maxi=max(maxi, c[i]);
		cout<<max((int)((n%2)?1:0), maxi-(n-maxi))<<'\n';
	}
}
