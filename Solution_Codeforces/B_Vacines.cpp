#include <bits/stdc++.h>
#define que queue
#define vt vector
#define st stack
#define fast ios_base::sync_with_stdio(false);
#define str string
#define pb push_back
#define pop pop_back

using namespace std;




void solve(){
    int n,k,d,w;
    cin >> n >> k >> d >> w;
    int a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    int d1 = k, m = a[0]+w, res = 1;
    for(int i = 0; i < n;i++){
        if(d1 != 0){
            if(a[i] <= m + d){
                d1--;
            }
            else{
                d1 = k-1;
                res++;
                m = a[i]+w;
            }
        }
        else if(d1 == 0){
            d1 = k-1;
            res++;
            m = a[i]+w;
        }
    }
    cout << res << "\n";
}

int main(){
    fast
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}

