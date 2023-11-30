#include <bits/stdc++.h>
using namespace std;
long long Trans(long long n)
{
	return n * (-1);
}
void ProblemE()
{
	int t;
	cin >> t;
	while(t--)
	{
		long n;
		cin >> n;
		vector<long long>arr;
		for(long long i = 0; i < n;i++)
		{
			long long temp;
			cin >> temp;
			arr.push_back(temp);
		}
		sort(arr.begin(), arr.end());
		for(long long i = 0; i < n - 1;i++)
		{
			if(arr[i] < 0 && arr[i+1] <= 0)
			{
				arr[i]*=-1;
				arr[i+1]*=-1;
			}
			else
			{
				if(arr[i] < 0)
				{
					long long temp = Trans(arr[i]);
					if(temp > arr[i+1])arr[i]*=-1, arr[i+1]*=-1;
				}
			}
		}
		long long sum = 0;
		for(long long i = 0; i < n;i++)sum+=arr[i];
		cout << sum << endl;
	}
}
int main()
{
	//ProblemD();
	ProblemE();
	return 0;
}
