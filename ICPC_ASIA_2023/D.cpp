#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        long long res = 0;
        int l_min = 0;
        map<int, int> m;
        for (int i = 0; i < n; i++) {
            if (m.count(v[i]) > 0) {
                int pos = m[v[i]];
                if (l_min <= pos) {
                    l_min = pos + 1;
                }
            }
            m[v[i]] = i;
            res += i - l_min + 1;
        }
        cout << res << '\n';
    }
}