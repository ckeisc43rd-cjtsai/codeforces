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
		int a, b, c;cin>>a>>b>>c;
		if(b%3==2&&c==0){
			cout<<-1<<'\n';
		}else if(b%3==1&&c<2){
			cout<<-1<<'\n';
		}else{
		cout<<(b+c+2)/3+a<<'\n';
		}
	}
}
