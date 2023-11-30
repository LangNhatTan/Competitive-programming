#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define fast ios_base::sync_with_stdio(false);
using namespace std;


int tt;



void solve() {
    int n, dp = -1, j = 1, res = 0, minV = 3000001, minV1;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        minV = min(v[i], minV);
    }
    if(n == 1) {
        cout << "0\n";
    }
    //cout << minV << '\n';
    else {
        if(v[1] != minV) {
            if(v[0] < v[1]) {
                res ++;
                dp = v[1];
            }
        }
        else {
            j ++;
        }
        minV1 = min(v[0], v[1]);
        for(j; j < n; ++j) {
            if(dp == -1) {
                if(v[j] > v[j - 1]) {
                    dp = v[j];
                    res ++;
                }
            }
            else if(dp != -1) {
                if(dp > v[j] && v[j] != minV && v[j] > minV1) {
                    res ++;
                    dp = v[j];
                }
            }
            minV1 = min(minV1, v[j]);
        }
        cout << res << '\n';
    }
}


int main() {
	fast
    cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}