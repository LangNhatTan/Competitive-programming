#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        string s;
        cin >> s;
        int n = s.size();
        long long res = 0, k = 0, maxi = 0;
        vector<long long> v1(n);
        vector<long long> v2(n);
        vector<long long> v3(n);
        v1[0] = (s[0] == 'R' ? 1 : 0);
        v2[0] = (s[0] == 'S' ? 1 : 0);
        v3[0] = (s[0] == 'P' ? 1 : 0);
        for (int i = 1; i < n; i++) {
            v1[i] = v1[i - 1] + (s[i] == 'R' ? 1 : 0);
            v2[i] = v2[i - 1] + (s[i] == 'S' ? 1 : 0);
            v3[i] = v3[i - 1] + (s[i] == 'P' ? 1 : 0);
        }
        for (int k = 2; k <= n; k++) {
            long long sum = 0;
            for (int i = 0; i < n; i += k) {
                if (i == 0) {
                    long long u1 = v1[k - 1];
                    long long u2 = v2[k - 1];
                    long long u3 = v3[k - 1];
                    sum += max({u1, u2, u3});
                }
                else {
                    long long l1 = v1[i - 1];
                    long long r1 = v1[min(n - 1, i + k - 1)];
                    long long l2 = v2[i - 1];
                    long long r2 = v1[min(n - 1, i + k - 1)];
                    long long l3 = v3[i - 1];
                    long long r3 = v3[min(n - 1, i + k - 1)];
                    long long u1 = r1 - l1;
                    long long u2 = r2 - l2;
                    long long u3 = r3 - l3;
                    sum += max({u1, u2, u3});
                }
            }
            if (maxi <= sum) {
                maxi = sum;
                res = k;
            }
        }
        cout << res << '\n';
        
    }
    return 0;
}