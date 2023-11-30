#include <iostream>
#include <vector>
#define ll long long
using namespace std;

class Solution
{
	public:
		ll FindValuesMaxMin(ll num)
		{
			ll maxValue = num % 10, minValue = num % 10;
			while(num != 0)
			{
				int tmp = num % 10;
				if(tmp > maxValue)maxValue = tmp;
				else if(tmp < minValue)minValue = tmp;
				num/=10;
			}
			return maxValue - minValue;
		}
		ll LuckyNumber(ll l, ll r)
		{
			vector<int>nums;
			for(int i = 0; i < 10;++i)
			{
				nums.push_back(i);
			}
			ll ans = r, tmp = FindValuesMaxMin(r);
			if(l < 10) return l;
			while(l <= r)
			{
				ll tmp1 = FindValuesMaxMin(l);
				if(tmp1 == 0)
				{
					return l;
				}
				tmp1 = FindValuesMaxMin(r);
				if(tmp1 == 0)
				{
					return r;
				}
				if(tmp < FindValuesMaxMin(l))
				{
					tmp = FindValuesMaxMin(l);
					ans = l;
				}
				if(tmp < FindValuesMaxMin(r))
				{
					tmp = FindValuesMaxMin(r);
					ans = r;
				}
				l++;
				r--;
			}
			return ans;
		}
};


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	Solution s;
	for(cin >> t;t--;)
	{
		ll l,r;
		cin >> l >> r;
		cout << s.LuckyNumber(l,r) << endl;
	}	
	return 0;
}
