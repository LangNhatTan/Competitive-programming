#include <bits/stdc++.h>
using namespace std;

int Sum(int arr[], int k)
{
	int sum = 0;
	for(int i = 0; i < k;i++)
	{
		sum+=arr[i];
	}
	return sum;
}

bool IsUgly(int arr[], int n)
{
	for(int i = 0;i < n;i++)
	{
		if(Sum(arr,i) == arr[i]) return true;
	}
	return false;
}

void Print(int arr[], int n)
{
	for(int i = 0; i < n;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
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
	if(n == 1)
	{
		cout << "YES" << endl;
		Print(arr,n);
	}
	else if(n == 2)
	{
		if(arr[0] == arr[1]) cout << "NO" << endl;
		else
		{
			cout << "YES" << endl;
			Print(arr,n);
		}
	}
	else
	{
		string ans = "NO";
		int count = 0;
		if(!IsUgly(arr,n))
		{
			cout << "YES" << endl;
			Print(arr,n);
		}
		else
		{
			while(count < n)
			{
				for(int i = 0; i < n;i++)
				{
					if(Sum(arr,i)) swap(arr[i-1], arr[i]);
				}
				if(!IsUgly(arr,n))
				{
					ans = "YES";
					break;
				}
				count++;
			}
			if(ans == "YES")
			{
				cout << "YES" << endl;
				Print(arr,n);
			}
			else cout << "NO" << endl;
		}
	}
    }
    return 0;
}
