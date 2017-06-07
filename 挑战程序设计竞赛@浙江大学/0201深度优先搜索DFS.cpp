#include<bits/stdc++.h>

using namespace std;
const int MAX_N = 10;
int a[MAX_N]={1, 2, 4, 7};
int n, k;

void input() {
    n = 3;
   // a = {1, 2, 4, 7};
    k = 15;
}

bool dfs(int i, int sum) {
    if (i == n)return sum == k;
    if (dfs(i + 1, sum))return true;
    if (dfs(i + 1, sum + a[i]))return true;
    return false;
}

int main() {
    if (dfs(0, 0))printf("Yes\n");
    else printf("No\n");
    return 0;
}