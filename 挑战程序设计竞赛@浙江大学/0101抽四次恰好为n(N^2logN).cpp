#include<bits/stdc++.h>

using namespace std;

bool solve(int n, int m, vector<int> &k) {
    vector<int> k2;
    for (size_t i = 0; i < k.size(); i++)
        for (size_t j = 0; j < k.size(); j++) {
            k2.push_back(k[i] + k[j]);
        }
    sort(k2.begin(), k2.end());
    for (size_t i = 0; i < k2.size(); i++) {
        if (binary_search(k2.begin(), k2.end(), m - k2[i]))
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