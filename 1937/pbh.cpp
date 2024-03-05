#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
#define fo(i,a,b) for(ll i=a;i<=b; i++)
using namespace std;
#define ll long long
signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<string> v(2);
		cin>>v[0]>>v[1];
		string s;
		ll i=0, j=0;
		fo(k, 0, n){
			if(j==n){
				s+=v[1][n-1];
				break;
			}
			s+=v[i][j];
			if(i==0 && j+1<n&&v[1][j]=='0'&&v[0][j+1]=='1')i+=1;
			else j+=1;
		
		}
		cout<<s<<'\n';
		j=n-1;
		while(j>=0&&s[j+1]==v[1][j])j-=1;
		j+=1;	
		int cnt=0;
		while(j+1<n&&v[0][j+1]<=v[1][j]) j+=1,cnt+=1;
		cout<<cnt+1<<'\n';
	}



}
