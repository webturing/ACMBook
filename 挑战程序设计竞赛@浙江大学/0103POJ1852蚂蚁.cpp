#include<cstdio>
#include<algorithm>

using namespace std;
const int MAX_N = 1000000;
int L, n;
int x[MAX_N];

int input() {
    scanf("%d%d", &L, &n);
    for (int i = 0; i < n; i++)
        scanf("%d", x + i);
}

int solve() {
    int minT = 0;
    for (int i = 0; i < n; i++) {
        minT = max(minT, min(x[i], L - x[i]));

    }
    int maxT = 0;
    for (int i = 0; i < n; i++) {
        maxT = max(maxT, max(x[i], L - x[i]));
    }
    printf("%d %d\n", minT, maxT);

}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        input();
        solve();
    }

    return 0;
}