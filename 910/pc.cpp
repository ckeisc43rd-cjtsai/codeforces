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
		int n, m, k;cin>>n>>m>>k;
		vector<vector<int>> color((n+1)*2, vector<int> ((m+1)*2, 0));
		vector<vector<int>> dis(n+1, vector<int>(m+1, 0));
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				dis[i][j]=n-i+m-j;
			}
		}
		int cur=1;
		for(int i=1; i<n; i++){
			color[2*i][1]=cur;
			cur=3-cur;
		}
		for(int j=1; j<m; j++){
			color[2*n-1][2*j]=cur;
			cur=3-cur;
		}
		for(int i=n-1; i>=1; i--){
			color[2*i][2*m-1]=cur;
			cur=3-cur;
		}
		for(int j=m-1; j>=1; j--){
			color[1][2*j]=cur;
			cur=3-cur;
		}
		if(k<n-1+m-1){
			cout<<"NO\n";
			continue;
		}else if((k-n+1-m+1)%2){
			cout<<"NO\n";
			continue;
		}else if((k-n+1-m+1)%4==2){
			swap(color[1][2], color[2][1]);
			color[2*n-3][2*m-2]=3-color[2*n-2][2*m-1];
			color[2*n-2][2*m-3]=3-color[2*n-1][2*m-2];
			color[3][2]=3-color[2][1];
			color[2][3]=3-color[1][2];
		}else{
			color[2*n-3][2*m-2]=3-color[2*n-2][2*m-1];
			color[2*n-2][2*m-3]=3-color[2*n-1][2*m-2];
		}
		/*for(int i=0; i<=n*2; i++){
			for(int j=0; j<=m*2; j++){
				cout<<color[i][j]<<' ';
			}cout<<'\n';
		}continue;*/
		cout<<"YES\n";
		for(int i=1; i<n*2; i+=2){
			for(int j=2; j<m*2; j+=2){
				cout<<(color[i][j]==1?'R':'B')<<' ';
			}cout<<'\n';
		}
		for(int i=2; i<n*2; i+=2){
			for(int j=1; j<m*2; j+=2){
				cout<<(color[i][j]==1?'R':'B')<<' ';
			}cout<<'\n';
		}

	}
}
