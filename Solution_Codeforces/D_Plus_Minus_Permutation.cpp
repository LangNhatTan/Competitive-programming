#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void solve(){
	ll n,x,y;
	cin >> n >> x >> y;
	ll f = n*(n+1)/2;
	ll flag = n / ((x*y)/__gcd(x,y)); // value from 1 to N divisible for x and y
	ll num1 = (n/x)-flag, num2 = (n/y)-flag;
	if(x == y){
		cout << "0\n";
	}
	else if(x < y){
		if(num2 <= 0) cout << f - ((n-num1) * (n-num1+1)/2) << "\n";
		else cout << f - ((n-num1) * (n-num1+1)/2) - (num2 * (num2+1)/2) << "\n";
	}
	else{
		if(num1 <= 0) cout << - num2*(num2+1)/2 <<"\n";
		else cout << f - ((n-num1) * (n-num1+1)/2) - (num2 * (num2+1)/2) << "\n";
	}

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


