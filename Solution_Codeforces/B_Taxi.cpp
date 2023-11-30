#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution
{
  public:
    int MinimumTaxi(vector<int>&students)
    {
        int n1 = 0, n2 = 0, n3 = 0, n4= 0, ans = 0;
        for(auto i: students)
        {
        	if(i == 1)n1++;
        	else if(i == 2)n2++;
        	else if(i == 3)n3++;
        	else n4++;
		}
		ans+=n4;
		if(n3 < n1)
		{
			ans+=n3;
			n1-=n3;
			n3 = 0;
		}
		else if(n1 <= n3)
		{
			ans+=n1;
			n3-=n1;
			n1 = 0;
		}
		if(n3 > 0)
		{
			ans+=n3;
			n3 = 0;
		}
		if(n2 > 0)
		{
			ans+=n2/2;
			n2 = n2 % 2;
		}
		int left = n1 + (n2 * 2);
		if(left <= 4 && left > 0)
		{
			ans++;
		}
		else if(left % 4 != 0)
		{
			ans+=(left/4)+1;
		}
		else
		{
			ans+=left/4;
		}
        return ans;
    }
};


int main()
{
    int n;
    cin >> n;
    vector<int>students;
    for(int i = 0; i < n;++i)
    {
        int tmp;
        cin >> tmp;
        students.push_back(tmp);
    }
    Solution s;
    cout << s.MinimumTaxi(students) << endl;
    return 0;
}
