#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;
int query(int x, int y){
	cout<<'?'<<' '<<x<<' '<<y<<endl;
	int ans;cin>>ans;
	return ans;
}
void report(int x, int y){
	cout<<'!'<<' '<<x<<' '<<y<<endl;
}
int n, m;
bool check(int x, int y){
	if(x>=1&&x<=n&&y>=1&&y<=m) return true;
	else return false;
}
signed main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>m;
		int ans1=query(1, 1)+2;
		int ans2=query(1, m);
		ans2=(m-ans2)-1;
		int ans3=query(n, 1);
		ans3=(n-ans3)*-1+1;
		int x1=(ans1-ans3)/2;
		int y1=ans1-x1;
		if((ans1+ans3)%2)x1=-100;
		int x2=(ans1-ans2)/2;
		int y2=ans1-x2;
		if((ans1+ans2)%2) x2=-100;
		if(!check(x1, y1)){
			report(x2, y2);
		}else if(!check(x2, y2)){
			report(x1, y1);
		}else{
			int q=query(x1, y1);
			if(q==0) report(x1, y1);
			else report(x2, y2);
		}
	}
}
