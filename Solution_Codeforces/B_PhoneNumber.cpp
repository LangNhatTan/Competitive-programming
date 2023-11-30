#include <bits/stdc++.h>
using namespace std;

void Group2(string s)
{
	string ans = "";
	for(int i = 0; i < s.size()-1;i+=2)
	{
		ans+=s[i];
		ans+=s[i+1];
		ans+='-';
	}
	ans[ans.size()-1] = ' ';
	cout << ans << endl;
}

void Group3(string s)
{
	string ans = "";
	for(int i = 0; i < s.size()-2;i+=3)
	{
		ans+=s[i];
		ans+=s[i+1];
		ans+=s[i+2];
		ans+='-';
	}
	ans[ans.size()-1] = ' ';
	cout << ans << endl;
}
// 128-47-56-39-58
int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	if(n <=3) cout << s << endl;
	else if(n % 2 == 0)Group2(s);
	else if(n % 3 == 0)Group3(s);
	else
	{
		string ans = "";
		if((n-2) % 3 == 0)
		{
			ans+=s[0];
			ans+=s[1];
			ans+='-';
			for(int i = 2; i < s.size()-2;i+=3)
			{
				ans+=s[i];
				ans+=s[i+1];
				ans+=s[i+2];
				ans+='-';
			}
			ans[ans.size()-1] = ' ';
			cout << ans << endl;
		}
		else if((n-3) % 2 == 0)
		{
			ans+=s[0];
			ans+=s[1];
			ans+=s[2];
			ans+='-';
			for(int i = 3; i < s.size()-1;i+=2)
			{
				ans+=s[i];
				ans+=s[i+1];
				ans+='-';
			}
			ans[ans.size()-1] = ' ';
			cout << ans << endl;
		}
	}
	return 0;
}
