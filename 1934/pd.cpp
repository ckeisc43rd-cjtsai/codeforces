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
		int a, b;cin>>a>>b;
		vector<int> ai(70), bi(70);
		int ta=a, tb=b;
		for(int i=0; ai>0;i++, ta/=2){
			ai[i]=ta&1;
		}
		for(int i=0; bi>0;i++, tb/=2){
			bi[i]=tb&1;
		}
		vector<int> need, dele;
		for(int i=0; i<67; i++){
			if(ai[i]==0&&bi[i]==1) {
			need.push_back(1);
			}else{
	need.push_back(0);
			}
			if(ai[i]==1&&bi[i]==0) {
dele.push_back(1);
}else{
dele.push_back(0);
}
		}
int ans1=0, ans2=0;
		for(int i=0; i<63; i++){
			ans1|=need[i];ans1<<=1;
			ans2|=dele[i];ans2<<=1;
		}
if(ans1>ans2) swap(ans1, ans2);
if(ans2>a) cout<<-1<<'\n';
else cout<<2<<'\n'<<a<<' '<<(a^ans2)<<' '<<(a^dele^need)<<'\n'
	}
}
