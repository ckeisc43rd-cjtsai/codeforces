#include <iostream>
#include <queue>
#define pii pair<int, int>
#define piii pair<int, pair<int, int>>
#include <vector>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n;cin>>n;
    vector<vector<char>> ans(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<8; j++){
            string tmp;cin>>tmp;
            for(int k=0; k<8; k++){
                if(tmp[k]!='.') ans[i].push_back(tmp[k]);
            }
        }
    }
    for(int i=0; i<n; i++){
        for(auto x:ans[i]) cout<<x;
        cout<<'\n';
    }
}