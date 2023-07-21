#include <iostream>
#include <queue>
#include <algorithm>
#define pii pair<int, int>
#define piii pair<int, pair<int, int>>
#include <vector>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin>>t;
    while(t--){
        int a, b;cin>>a>>b;
        vector<int> li(a);
        for(int i=0; i<a; i++)cin>>li[i];
        sort(li.begin(), li.end());
        int tmp=li[0];
        int maxi=1, tpp=1;
        for(int i=1; i<a; i++){
            if(li[i]-tmp<=b){
                tpp++;
                maxi=max(maxi, tpp);
            }else{
                tpp=1;
            }tmp=li[i];
        }cout<<a-maxi<<'\n';
    }
}