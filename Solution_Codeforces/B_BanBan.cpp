#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
	for(int i = 0; i < s.size();i+=3)
	{
		string s1;
		s1+=s[i];
		s1+=s[i+1];
		s1+=s[i+2];
		if(s1 == "BAN") return true;
	}
	return false;
}

void Solution(string s, int n)
{
	vector<int>ans;
	int a = 1, b = s.size()-1, count = 0;
	for(int i = 0; i < n;i++)
	{
		swap(s[a],s[b]);
		ans.push_back(a);
		ans.push_back(b);
		a+=3;
		b -=3;
		if(!check(s))break;
		else count++;
	}
	cout << count + 1 << endl;
	for(int i = 0; i < ans.size()-1;i+=2)
	{
		cout << ans[i] << " " << ans[i+1] << endl;
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		string s;
		for(int i = 0; i < n;i++)
		{
			s+="BAN";
		}
		if(n <=2)
		{
			cout << 1 << endl;
			if(n == 1) cout << 1 << " " << 3 << endl;
			else cout << 2 << " " << 6 << endl;
		}
		else
		{
			Solution(s,n);
		}
	}	
	return 0;
}
