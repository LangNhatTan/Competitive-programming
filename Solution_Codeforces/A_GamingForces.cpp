#include <bits/stdc++.h>
using namespace std;
int Count(int arr[], int n)
{
	int n1 = 0;
	for(int i = 0; i < n;i++)
	{
		if(arr[i] == 1)n1++;
	}
	return n1;
}



int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n;i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int  w1 = 0;
	int temp = n;
	if(Count(arr,n) <= 1) cout << n << endl;
	else
	{
		bool check = true;
		while(check)
		{
			for(int i = 0; i < n - 1;i++)
			{
				if(arr[i] == 1 && arr[i+1] == 1)
				{
					arr[i]-=1;
					arr[i+1]-=1;	
					w1++;
					temp-=2;
					break;
				}
			}
			if(Count(arr,n) <= 1) break;
		}
		cout <<  temp + w1 << endl;
	}
	}
	
	return 0;
}
