// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void Nobita(){
    int t;
    cin >> t;
    while(t--){
        int n, res = 0;
        cin >> n;
        int arr[n+1];
        vector<int>tmp;
        arr[0] = 0;
        for(int i = 1; i < n+1;i++){
            cin >> arr[i];
        }
        for(int i = 1; i < n+1;i++){
            if(abs(arr[i]-i) != 0){
            	res = __gcd(res,abs(arr[i]-i));
            }
        }
        cout << res << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    Nobita();

    return 0;
}
