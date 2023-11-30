#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;


void solve(){
    ll n,k,b,s;
    cin >> n >> k >> b >> s;
    if(k*b > s || s > k*b + n*(k-1)){
        cout << "-1\n";
        return;
    }
    vector<ll>ans(n,0);
    ans[0] = k*b;
    s-=k*b;
    if(s > 0){
        ans[0]+=min(s,k-1);
        s-=min(s,k-1);
    }
    for(int i = 1; i < n;i++){
        if(s > 0){
            ans[i] = min(s,k-1);
            s-=min(s,k-1);
        }
    }
    for(auto &i:ans){
        cout << i <<  " ";
    }
    cout << '\n';
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
