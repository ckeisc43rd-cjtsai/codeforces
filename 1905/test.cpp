#include <iostream>
#include <vector>
#include <algorithm> //for lower_bound()
using namespace std;
int main() {
    int n; //數字個數
    cout << "請輸入數字個數：\n";
    cin >> n;
    vector<int> LIS; //LIS的DP
    cout << "請輸入數列：\n";
    for(int i = 0; i < n; ++i) {
        int buf;
        cin >> buf; //輸入數字
        if(LIS.empty() || buf > LIS.back()) { //如果LIS為空 or 新數字比LIS的結尾更大
            LIS.push_back(buf);
        }
        else {
            auto p = lower_bound(LIS.begin(), LIS.end(), buf); //找到第一個大於等於新數字的DP
            *p = buf; //取代
        }
        cout << "輸入第" << i + 1 << "個數字後的DP：\n";
        for(auto it = LIS.begin(); it != LIS.end(); ++it) {
            cout << *it << ' ';
        }
        cout << '\n';
    }
    return 0;
}


