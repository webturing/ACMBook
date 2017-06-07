#include<bits/stdc++.h>

using namespace std;
const int MAX_N = 200;
int N, M;
vector<bool> V(MAX_N + 1);
vector<vector<int> > G(MAX_N + 1);

void dfs(int n) {
    if (V[n])return;
    V[n] = true;
    for (auto p:G[n])
        if (V[p] == false) {
            bfs(p);
            V[p] = true;
        }
}

void solve() {
    int res = 0;
    for (int i = 1; i <= N; i++) {
        if (V[i] == false) {
            ++res;
            bfs(i);
        }
    }
    printf("%d\n", res - 1);
}


int main() {
    while (~scanf("%d%d", &N, &M)) {
        if (N == 0 && M == 0)break;
        for (int i = 1; i <= N; i++) {
            G[i].clear();
            V[i] = false;

        }
        for (int i = 0; i < M; i++) {
            int x, y;
            scanf("%d%d", &x, &y);
            if (G[x].end() == find(G[x].begin(), G[x].end(), y))
                G[x].push_back(y);
            if (G[y].end() == find(G[y].begin(), G[y].end(), x))
                G[y].push_back(x);
        }
        solve();
    }
    return 0;
}