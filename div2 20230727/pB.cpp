#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
#define pii pair<int, int>
#define ff first
#define ss second
#define int long long
#define MAXN 500
using namespace std;
class Compare {
    public:
       bool operator()(pii a, pii b){
           if(a.ff>b.ff){
               return false;
           }else if(a.ff<b.ff){
            return true;
           }else{
            if(a.ss>b.ss) return true;
            else return false;
           }
      }
};
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n, k;cin>>n>>k;
        priority_queue<pii, vector<pii>, Compare> pq;
        for(int i=0; i<n; i++){
            int a;cin>>a;
            a%=k;if(a==0) a=k;
            pq.push({a, i+1});
        }
        while(!pq.empty()){
            pii tmp=pq.top();pq.pop();
            if(tmp.ff<=k) cout<<tmp.ss<<' ';
            else{
                pq.push({tmp.ff-k, tmp.ss});
            }
        }cout<<'\n';
    }
}