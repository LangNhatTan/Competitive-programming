#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;


int tt, n;


void solve() {
    cin >> n;
    int a[n + 1][n + 1];
    int l = 1, r = n * n, f = 1;
    for(int i = 1; i <= n; i++) {
        if(i % 2) {
            for(int j = 1; j <= n; j++) {
                if(f % 2) {
                    a[i][j] = l;
                    l ++;
                }
                else {
                    a[i][j] = r;
                    r --;
                }
                f ++;
            }
        }
        else {
            for(int j = n; j >= 1; j--) {
                if(f % 2) {
                    a[i][j] = l;
                    l ++;
                }
                else {
                    a[i][j] = r;
                    r --;
                }
                f ++;
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}