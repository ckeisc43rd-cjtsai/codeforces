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
		int d=n*n-k;
		if(d%n==0){
			cout<<"Yes\n";
			int tmp=k/n;
			for(int i=0; i<tmp; i++){
				for(int j=0; j<n; j++) cout<<1<<' ';
				cout<<'\n';
			}
			for(int i=tmp; i<n; i++){
				for(int j=0; j<n; j++) cout<<0<<' ';
				cout<<'\n';
			}
		}else if(d%4==0){
			cout<<"Yes\n";
			int tmp=d/4;
			int line=0;
			while(tmp*2>=n){
				for(int i=0; i<n-(n%2); i++) cout<<0<<' ';
				if(n%2) cout<<1;
				cout<<'\n';
				for(int i=0; i<n-(n%2); i++) cout<<0<<' ';
				if(n%2) cout<<1;
				cout<<'\n';
				tmp-=n/2;
				line+=2;
			}
			if(line==n) continue;
			for(int i=0; i<tmp*2; i++)cout<<0<<' ';
			for(int i=tmp*2; i<n; i++) cout<<1<<' ';
			cout<<'\n';
			for(int i=0; i<tmp*2; i++)cout<<0<<' ';
			for(int i=tmp*2; i<n; i++) cout<<1<<' ';
			cout<<'\n';
			line+=2;
			for(int i=line; i<n; i++){
				for(int j=0; j<n; j++){
					cout<<1<<' ';
				}
				cout<<'\n';
			}
		}else if(d>n&&(d-n)%4==0){
			cout<<"Yes\n";
			int tmp=(d-n)/4;
			int line=2;
			for(int i=0; i<n; i++) cout<<1<<' ';
			cout<<'\n';
			for(int i=0; i<n; i++) cout<<0<<' ';
			cout<<'\n';
			while(tmp*2>=n){
				for(int i=0; i<n-(n%2); i++) cout<<0<<' ';
				if(n%2) cout<<1;
				cout<<'\n';
				for(int i=0; i<n-(n%2); i++) cout<<0<<' ';
				if(n%2) cout<<1;
				cout<<'\n';
				tmp-=n/2;
				line+=2;
			}
			if(line==n) continue;
			for(int i=0; i<tmp*2; i++)cout<<0<<' ';
			for(int i=tmp*2; i<n; i++) cout<<1<<' ';
			cout<<'\n';
			for(int i=0; i<tmp*2; i++)cout<<0<<' ';
			for(int i=tmp*2; i<n; i++) cout<<1<<' ';
			cout<<'\n';
			line+=2;
			for(int i=line; i<n; i++){
				for(int j=0; j<n; j++){
					cout<<1<<' ';
				}
				cout<<'\n';
			}
			

			}
		else{
			cout<<"No\n";
		}
	}
}
