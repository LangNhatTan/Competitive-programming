#include <iostream>
using namespace std;
bool check(string s, int k)
{
	for(int i = 0; i < k-1;i++)
	{
		if(s[i] == s[i+1]) return false;
	}
	return true;
}

void ProblemA()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		string s,s1,ans = "NO";
	cin >> s >> s1;
	bool c = false;
	if(check(s,s.size()) && check(s1,s1.size())) cout << "YES" << endl;
	else if(!check(s,s.size()) && !check(s1,s1.size())) cout << "NO" << endl;
	else
	{
		if(!check(s,s.size()))
		{
			int t1 = s.size()-1;
			while(!c)
			{
				s1+=s[t1];
				if(check(s,t1) && check(s1,s1.size()))
				{
					ans = "YES";
					c = true;
				}
				else if(!check(s1,s1.size())) c = true;
				else if(t1 == 1) c = true;
				t1--;
			}
			ans == "YES" ? cout << ans << endl : cout << "NO" << endl;
		}
		else
		{
			int t1 = s1.size()-1;
			while(!c)
			{
				s+=s1[t1];
				if(check(s1,t1) && check(s,s.size()))
				{
					ans = "YES";
					c = true;
				}
				else if(!check(s,s.size())) c = true;
				else if(t1 == 1)c = true;
				t1--;
			}
			ans == "YES" ? cout << ans << endl : cout << "NO" << endl;
		}
	}
	}
	
}

int main()
{
	ProblemA();
    return 0;
}
