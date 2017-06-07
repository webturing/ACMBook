#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> &a) {
    int mx = 0;
    for (int i = 0; i < a.size(); i++)
        for (int j = i + 1; j < a.size(); j++)
            for (int k = j + 1; k < a.size(); k++) {
                vector<int> v = {a[i], a[j], a[k]};
                sort(v.begin(), v.end());
                if (v[0] + v[1] > v[2]) {
                    if (v[0] + v[1] + v[2] > mx)
                        mx = v[0] + v[1] + v[2];
                }
            }
    return mx;

}

int main() {

    vector<int> k = {1, 3, 4,5};
    cout<<solve(k)<<endl;
    return 0;
}