#include<bits/stdc++.h>

using namespace std;

bool solve(int n, int m, vector<int> &k) {
    for (auto a:k)
        for (auto b:k)
            for (auto c:k)
                for (auto d:k) {
                    if (a + b + c + d == m)
                        return true;
                }
    return false;
}

int main() {
    int n = 3;
    int m = 10;
    vector<int> k = {1, 3, 5};
    if (solve(n, m, k))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}