#include <bits/stdc++.h>
#define pii pair<int, int>
#define int long long
#define ff first
#define ss second
using namespace std;
vector<int> take(10, 0);
vector<vector<int>> refi(200);//, vector<int>(3));
int ctt=0;
void recur(int n, int cnt){
	//if(n==10) return;
	if(cnt==3){
		vector<int> ala;
		for(int i=0; i<10; i++) {
			if(take[i]) refi[ctt].push_back(i);
		} //return;
		ctt++;
		return;
		//refi.push_back(ala);
	}if(cnt>3) return;
	if(n==10) return;
	take[n]=1;
	recur(n+1, cnt+1);
	take[n]=0;
	recur(n+1, cnt);
}
signed main(){
	recur(0, 0);

	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int n, k;cin>>n>>k;
		if(k>=3){
			for(int i=0; i<n; i++) cin>>k;
			cout<<0<<'\n';
			continue;
		}else if(k==1){
			vector<int> li(n);
			for(int i=0; i<n; i++){
				cin>>li[i];
			}
			int mini=INT64_MAX;
			for(int i=0; i<n; i++){
				for(int j=0; j<n; j++){
					if(i==j) continue;
					mini=min(mini, abs(li[i]-li[j]));
				}
			}
			for(int i=0; i<n; i++) mini=min(mini, li[i]);
			cout<<mini<<'\n';
		}else{
			vector<vector<int>> li(10, vector<int>(n/10));
			vector<int> all(n);
			int cnt=0;
			for(int i=0; i<10; i++){
				for(int j=0; j<n/10; j++) {cin>>li[i][j];all[cnt]=li[i][j];cnt++;}
			}
			for(int i=0; i<n%10; i++){
				int a;cin>>a;
				li[9].push_back(a);
				all[cnt]=a;
				cnt++;
			}
			int mini=INT64_MAX;
			for(int i=0; i<10; i++){
				int tmp=li[i].size();
				for(int j=0; j<tmp; j++){
					for(int k=0; k<tmp; k++){
						if(j==k) continue;
						int tpp=abs(li[i][j]-li[i][k]);
						mini=min(mini, tpp);
						for(int l=0; l<n; l++){
							mini=min(mini, abs(tpp-all[l]));
							mini=min(mini, abs(abs(li[i][j]-all[l])-li[i][k]));
							mini=min(mini, abs(abs(li[i][k]-all[l])-li[i][j]));
						}
					}
				}
			}
			for(int i=0; i<n; i++){
				for(int j=0; j<n; j++){
					if(i==j) continue;
					mini=min(mini, abs(all[i]-all[j]));
				}
			}
					for(int i=0; i<n; i++){
				mini=min(mini, all[i]);
			}//cout<<ctt;cout.flush();
			for(int i=0; i<120; i++){
				int o=refi[i][0], r=refi[i][1], y=refi[i][2];
				for(int j=0; j<li[o].size(); j++){
					for(int k=0; k<li[r].size(); k++){
						for(int l=0; l<li[y].size(); l++){
							mini=min(mini, abs(abs(li[o][j]-li[r][k])-li[y][j]));
							mini=min(mini, abs(abs(li[o][j]-li[y][j])-li[r][k]));
							mini=min(mini, abs(abs(li[r][k]-li[y][j])-li[o][j]));

						}
					}
				}
			}
			cout<<mini<<'\n';
		}
	}
}
