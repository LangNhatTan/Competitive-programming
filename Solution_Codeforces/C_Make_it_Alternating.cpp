#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MOD = 1e9+7;
const int mod = 998'244'353;

void tmp(ll &a, ll b){
    a = (a* 1LL * b) % mod;
}
void solve(){
    string s;
    cin >> s;
    ll n = s.size(), cnt = 1, a = 0, b = 1;
    stack<char>st;
    for(int i = 0; i < n;i++){
        if(st.size() == 0){
            st.push(s[i]);
        }
        else{
            char tmp = st.top();
            if(tmp == s[i]){
                cnt++; a++;
            }
            else{
                b = (b * 1LL * cnt) % mod;
                cnt = 1;
                st.push(s[i]);
            }
        }
    }
    b*=cnt;
    if(a == 0){
        cout << "0 1\n";
    }
    else{
        for(ll i = 1; i <= a;i++){
            tmp(b,i);
        }
        cout << a << ' ' << b << '\n';
    }
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    
    while(tt--){
        solve();
    }
    return 0;
}


