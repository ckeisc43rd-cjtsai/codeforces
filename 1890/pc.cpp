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
		vector<char> a(1000);
		for(int i=500; i<500+n; i++) {
			a[i]=s[i-500];}
		//for(int x:a) cout<<x;
		//cout<<'\n';
		int l=500, r=500+n-1;
		int det=true;
		if(n%2) det=false;
		int nn=1;
		int bnn=n;
		int nl=n;
		int cnt=0;
		vector<int> ans;
		while(r>=l&&det&&cnt<350){
			//cout<<l<<' '<<r<<'\n';
			if(a[l]!=a[r]){
				l++;r--;
				nn++;bnn--;
			}else if(a[l]=='1'&&a[r]=='1'){
				cnt++;
				ans.push_back(nn-1);
				a[l-1]='1';
				l--;r--;
				nn++;
				bnn++;
			}else if(a[l]=='0'&&a[r]=='0'){
				cnt++;
				ans.push_back(bnn);
				a[r+1]='0';
				l++;r++;
				bnn++;
			}
		}
		if(cnt>310) det=false;
		if(det){
			cout<<ans.size()<<'\n';
			for(int x:ans) cout<<x<<' ';
			cout<<'\n';
		}else{
			cout<< -1 <<'\n';
		}
	}
}
