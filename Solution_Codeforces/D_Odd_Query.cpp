#include <iostream>
#include <vector>
# define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin >> t;
	while(t--)
	{
		ll n,q, sum = 0;
		cin >> n >> q;
		vector<ll>vt;
		for(int i = 0; i < n;i++)
		{
			ll temp;
			cin >> temp;
			sum+=temp;
			vt.push_back(temp);
		}
		vector<ll>prefix;
		prefix.push_back(vt[0]);
		for(int i = 1; i < vt.size();i++)
		{
			prefix.push_back(prefix[i-1] + vt[i]);
		}
		while(q--)
		{
			ll l,r,k;
			cin >> l >> r >> k;
			if(l -1 == 0)
			{
				ll temp = sum - prefix[r-1];
				ll num = (r-l+1)*k;
				if((temp + num) % 2 == 1) cout << "YES" << endl;
				else cout << "NO" << endl;
			}
			else
			{
				ll temp = sum - (prefix[r-1] - prefix[l-2]);
				ll num = (r-l+1)*k;
				if((temp + num)%2 == 1) cout << "YES" << endl;
				else cout << "NO" << endl;
			}
		}
		
	}
	return 0;
}
