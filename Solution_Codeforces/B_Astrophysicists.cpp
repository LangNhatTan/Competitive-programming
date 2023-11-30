#include <iostream>
#include <cmath>
using namespace std;
long long tt, n, k, g, res1, v11;


void solve() {
    cin >> n >> k >> g;
    res1 = min(k * g, (long long)((g - 1) / 2) * n);
    v11 = (k * g - res1) % g;
    if(v11 > 0) {
        res1 -= (long long)((g - 1) / 2);
        long long v_1 = (((g - 1) / 2) + v11 ) % g;
        if(v_1 * 2 < g) {
            res1 += v_1;
        } else {
            res1 -= g - v_1;
        }
    }
    cout << res1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> tt;
    while(tt --) {
        solve();
    }
    return 0;
}