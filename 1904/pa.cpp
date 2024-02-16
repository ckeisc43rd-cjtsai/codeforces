#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;
const int dx[4]={
	1, 1, -1, -1
};
const int dy[4]={
	-1, 1, -1, 1
};
signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int a, b;cin>>a>>b;
		int kx, ky, qx, qy;cin>>kx>>ky>>qx>>qy;
		int cnt=0;
		for(int i=0; i<4; i++){
			int tx=kx+dx[i]*a;
			int ty=ky+dy[i]*b;
			//cout<<tx<<' '<<ty<<'\n';
			for(int j=0; j<4; j++){
				//cout<<'z'<<tx+dx[i]*a<<' '<<((ty+dy[i]*b==qy))<<'\n';
				if((tx+dx[j]*a==qx)&&(ty+dy[j]*b==qy)) cnt++;
				if((tx+dx[j]*b==qx)&&(ty+dy[j]*a==qy)) cnt++;
				//cout<<cnt<<'\n';
			}
		}
		swap(a, b);
		for(int i=0; i<4; i++){
			int tx=kx+dx[i]*a;
			int ty=ky+dy[i]*b;
			for(int j=0; j<4; j++){
				if((tx+dx[j]*a==qx)&&(ty+dy[j]*b==qy)) cnt++;
				if((tx+dx[j]*b==qx)&&(ty+dy[j]*a==qy)) cnt++;
			}
		}
		if(a==b) cout<<cnt/4<<'\n';
		else cout<<cnt<<'\n';
	}
}
