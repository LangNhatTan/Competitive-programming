#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int *arr = new int[n];
		for(int i = 0; i < n;i++)
		{
			cin >> arr[i];
		}
		if(n == 1)
		{
			if(0 % 2 == arr[0] % 2)cout << 0 << endl;
			else cout << -1 << endl;
		}
		else
		{
			int even = 0, odd = 0;
			for(int i = 0; i < n;i++)
			{
				if(i % 2 == 0 && arr[i] % 2 == 1)even++;
				else if(i % 2 == 1 && arr[i] % 2 == 0)odd++;
			}
			if(even == odd)cout << even << endl;
			else cout << -1 << endl;	
		}
		delete[]arr;
	}
    return 0;
}
