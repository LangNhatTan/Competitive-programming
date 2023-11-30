#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MOD = 1e9+7;
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> h(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> h[i];
    }
    long long res = 0, sum = a[0], j = 0;
    if(sum <= k) {
        res = 1;
    }
    for(int i = 1; i < n; i++) {
        if(h[i - 1] % h[i] == 0) {
            sum += a[i];
        }
        else {
            sum = a[i];
            j = i;
        }
        while(sum > k) {
            sum -= a[j ++];
        }
        res = max(res, i - j + 1);
    }
    cout << res << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while(tt --) {
        solve();
    }
    return 0;
}

