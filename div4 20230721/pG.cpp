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
        int n;cin>>n;
        vector<int> li(n);
        vector<int> li2(n);
        vector<int> li3(n);
        for(int i=0; i<n; i++){
            int a, b;cin>>a>>b;
            li[i]=a-b;
            li2[i]=a;
            li3[i]=b;
        }sort(li.begin(), li.end());
        sort(li2.begin(), li2.end());
        sort(li3.begin(), li3.end());
        int aa=li[0], bb=li2[0], cc=li3[0];
        int cnta=0, cntb=0, cntc=0;
        for(int i=1; i<n; i++){
            
        }
    }
}