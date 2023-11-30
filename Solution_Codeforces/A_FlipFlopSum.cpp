#include <bits/stdc++.h>
using namespace std;

int Sum(int arr[], int n)
{
	int sum = 0;
	for(int i = 0; i < n;i++)sum+=arr[i];
	return sum;
}
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
		bool check = false;
		for(int i = 0; i < n-1;i++)
		{
			if(arr[i] == -1 && arr[i+1] == -1)
			{
				arr[i] = 1;
				arr[i+1] = 1;
				check = true;
				break;
			}
		}
		if(check) cout << Sum(arr,n) << endl;
		else if(n == 2)
		{
			arr[0] == 1 ? arr[0] = -1 : arr[0] = 1;
			arr[1] == 1 ? arr[1] = -1 : arr[1] = 1;
			cout << Sum(arr,n) << endl;
		}
		else
		{
			check = false;
			for(int i = 0; i < n-1;i++)
			{
			    if((arr[i] == 1 && arr[i+1] == -1) || (arr[i] == -1 && arr[i+1] == 1))
			    {
			        arr[i] == 1 ? arr[i] = -1 : arr[i] = 1;
			        arr[i+1] == 1 ? arr[i+1] = -1 : arr[i+1] = 1;
			        check = true;
			        break;
			    }
			}
			if(check)cout << Sum(arr,n) << endl;
			else
			{
				arr[0] == 1 ? arr[0] = -1 : arr[0] = 1;
				arr[1] == 1 ? arr[1] = -1 : arr[1] = 1;
				cout << Sum(arr,n) << endl;
			}
		}
		delete[]arr;
	}
}


