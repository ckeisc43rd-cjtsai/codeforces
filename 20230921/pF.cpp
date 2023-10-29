#include <bits/stdc++.h>
using namespace std;

signed main(){
        ios_base::sync_with_stdio(false);cin.tie(0);
        int t;cin>>t;
        while(t--){
                int n, k;cin>>n>>k;
                vector<int> h(n);
                vector<int> f(n);
                for(int i=0; i<n; i++) cin>>f[i];
                for(int i=0; i<n; i++) cin>>h[i];
                deque<int> dq;
                int cnt=0, maxi=0;
                for(int i=0; i<n-1; i++){
                        if(!(h[i]%h[i+1])){
							//cout<<i;
                                if(dq.size()){
                                        dq.push_back(f[i+1]);
                                        cnt+=f[i+1];
                                        while(cnt>k){
                                                cnt-=dq.front();
                                                dq.pop_front();
                                        }
                                }else{
                                        if(f[i]+f[i+1]<=k){
                                                dq.push_back(f[i]);
                                                dq.push_back(f[i+1]);
												cnt=f[i]+f[i+1];
                                        }
                                }
                        }else{
                                dq.clear();
								cnt=0;
                        }
                int tmp=dq.size();
                    //cout<<tmp;
                        maxi=max(maxi, tmp);
                }
                if(n!=1){
					cout<<max(maxi, 1)<<'\n';
				}else{
					cout<<0<<'\n';
				}
        }
}
