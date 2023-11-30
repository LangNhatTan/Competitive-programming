# include <bits/stdc++.h>

using namespace std;


void solve() {
    int n, q;
    cin >> n >> q;
    vector<long long> v(n), x, u(31, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int u1 = 31;
    for (int i = 0; i < q; i++) {
        int k;
        cin >> k;
        if (u[k] == 0) {
            u[k] = 1;
            for (int j = 0; j < n; j++) {
                if (v[j] % (1 << k) == 0) {
                    v[j] += (1 << (k - 1));
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}