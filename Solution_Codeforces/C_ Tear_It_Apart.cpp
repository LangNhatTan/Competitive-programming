#include <bits/stdc++.h>
#define ll long long
using namespace std;

int u(int n) {
    int cnt = 0;
    while(n > 0) {
        n /= 2;
        cnt ++;
    }
    return cnt;
}

void solve(){
    string s;
    cin >> s;
    int n =  s.size(), res = INT_MAX;
    for(char i = 'a'; i <= 'z'; i++) {
        int maxi = 0;
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            if(s[j] == i) {
                cnt = 0;
            }
            else {
                cnt ++;
            }
            maxi = max(maxi, cnt);
        }
        int operation = u(maxi);
        res = min(res, operation);
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

