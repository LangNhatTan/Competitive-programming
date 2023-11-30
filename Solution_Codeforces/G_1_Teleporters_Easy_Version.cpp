#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);

using namespace std;

void solve(){
    int n,c;
    cin >> n >> c;
    vector<int>sum;
    for(int i = 1; i <=n;i++){
        int x;
        cin >> x;
        sum.push_back(x+i);
    }
    sort(sum.begin(),sum.end());
    int res = 0;
    for(int i = 0; i < sum.size();i++){
        if(sum[i] <= c){
            res++;
            c-=sum[i];
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