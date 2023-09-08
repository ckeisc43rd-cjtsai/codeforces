#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define pii pair<int, int>
#define ss second
using namespace std;

typedef pair<int, int> pii;

int prim(vector< vector<pii> >& graph) {
    priority_queue<pii, vector<pii>, greater<pii> > pq;
    vector<int> currentMinCost(graph.size(), INT32_MAX);
    vector<bool> inside(graph.size(), false);
    int sum = 0;
for(int i=0; i<graph.size(), i++){
	if(inside[i]) continue;
    pq.push({0, i});
    currentMinCost[i] = 0;
    while (!pq.empty()) {
        auto [w, u] = pq.top();
        pq.pop();

        if (inside[u]) continue;
        inside[u] = true;
        sum += w;

        for (auto& [w, v]: graph[u]) {
            if (!inside[v] && currentMinCost[v] > w) {
                currentMinCost[v] = w;
                pq.push({w, v});
            }
        }
    }
}
    return sum;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int vertexCount, edgeCount;
    cin >> vertexCount;
	edgeCount=vertexCount;
int n=vertexCount;
    vector< vector<pii> > graph(vertexCount);
	for(int i=0; i<n; i++){
		int a;cin>>a;
		graph[i].push_back({a, 0});
	}
    int u, v, w;
    for (int i = 0; i < edgeCount; i++) {
        cin >>u;
		graph[i][1].ss=u;
    }

    cout << prim(graph) << '\n';
}

