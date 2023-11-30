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
    int n;
    cin >> n;
    str s;
    cin >> s;
    vt<int>dp;
    vt<char>res;
    for(int i = 0; i < s.size();i++){
        if(s[i] != '?')dp.pb(i);
        res.pb(s[i]);
    }
    if(dp.size() == 0){
        char c = 'B';
        for(int i = 0; i < n;i++){
            cout << c;
            c == 'B' ? c = 'R' : c = 'B';
        }
    }
    else{
        int pre = dp[0], last = dp[dp.size()-1];
        char c;
        // feed data from 0 to first different element in dp
        if(pre & 1){
            s[pre] == 'B' ? c = 'R' : c = 'B';
        }
        else{
            c = s[pre];
        }
        for(int i = 0; i < pre;i++){
            res[i] = c;
            c == 'B' ? c = 'R' : c = 'B';
        }
        // feed data from last element in dp to n
        s[last] == 'B' ? c ='R' : c = 'B';
        for(int i = last+1; i < n;i++){
            res[i] = c;
            c == 'B' ? c = 'R' : c = 'B';
        }
        int j = pre + 1;
        for(int i = 1; i < dp.size();i++){
            int d = dp[i] - dp[i-1] - 1;
            if(d & 1){
                if(s[dp[i]] == s[dp[i-1]]){
                    s[dp[i-1]] == 'B' ? c = 'R' : c = 'B';
                }
                else{
                    c = 'B';
                }
                while(j < dp[i]){
                    res[j] = c;
                    c == 'B' ? c = 'R' : c = 'B';
                    j++;
                }
            }
            else if(!(d & 1) && d > 0){
                if(s[dp[i]]== s[dp[i-1]]){
                    c = 'B';
                }
                else{
                    s[dp[i-1]] == 'B' ? c = 'R': c = 'B';
                }
                while(j < dp[i]){
                    res[j] = c;
                    c == 'B' ? c = 'R' : c = 'B';
                    j++;
                }
            }
            j = dp[i]+1;
        }
        for(auto &i:res){
            cout << i;
        }
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
