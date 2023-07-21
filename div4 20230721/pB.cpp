#include <iostream>
#include <queue>
#define pii pair<int, int>
#define piii pair<int, pair<int, int>>
#include <vector>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        priority_queue<piii> pq;
        for(int i=1; i<=n; i++){
            int a, b;
            cin>>a>>b;
            pq.push({b, {a, i}});

        }
        piii tmp=pq.top();
            while(tmp.second.first>10){
                pq.pop();
                tmp=pq.top();
            }
        cout<<tmp.second.second<<'\n';
    }
}