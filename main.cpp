#include<bits/stdc++.h>

using namespace std;
const int MAX_N = 20;
int a[MAX_N];
int n, k;

bool dfs(int i, int sum) {
    if (i == n)return sum == k;
    if (dfs(i + 1, sum))return true;
    if (dfs(i + 1, sum + a[i]))return true;
    return false;
}

int main() {
    while (~scanf("%d", &n)) {
       int  tot = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            tot += a[i];
        }
        if (tot % 2 == 0) {
            k = tot / 2;
            if (dfs(0, 0) == k)
                printf("Yes\n");
            else
                printf("No\n");
        } else
            printf("No\n");
    }


    return 0;
}