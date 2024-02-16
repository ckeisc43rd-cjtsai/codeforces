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
		int n, k;cin>>n>>k;
		string s;cin>>s;
		int cnt=0;
		for(char x:s) if(x=='B') cnt++;
		if(cnt==k){
			cout<<0<<'\n';
			continue;
		}else if(cnt<k){
			for(int i=0; i<n; i++){
				if(cnt==k) break;
				if(s[i]=='A'){
					s[i]='B';
					cnt++;
				}
			}
			bool cc=true;
			for(int i=0; i<n; i++){
				if(s[i]!='B'){
					cout<<1<<'\n'<<i<<' '<<'B'<<'\n';
					cc=false;
					break;
				}
			}
			if(cc){
				cout<<"1\n"<<n<<" B\n";
			}
		}else{
			for(int i=0; i<n; i++){
				if(cnt==k) break;
				if(s[i]=='B'){
					s[i]='A';
					cnt--;
				}
			}
			bool cc=true;
			for(int i=0; i<n; i++){
				if(s[i]!='A'){
					cout<<1<<'\n'<<i<<' '<<'A'<<'\n';
					cc=false;
					break;
				}
			}if(cc) cout<<"1\n"<<n<<" A\n";

		}
	}
}
