#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
    cin >> t;
    while(t--)
    {
        int n, odd = 0, even = 0;
        cin >> n;
        int *arr = new int[n];
        for(int i = 0; i < n;i++)
        {
            cin >> arr[i];
        }
        if(n == 3)
        {
            if((arr[0] + arr[1] + arr[2]) % 2 == 1)
            {
                cout << "YES" << endl;
                cout << 1 << " " << 2 << " " << 3 << endl;
            }
            else cout << "NO" << endl;
        }
        else
        {
            for(int i = 0; i < n;i++)
            {
                arr[i] % 2 == 0 ? even++ : odd++;
            }
            int a = -1,b= -1,c = -1;
            if(odd == 0)cout << "NO" << endl;
            else if(even == 0)
            {
            	cout << "YES" << endl;
                cout << 1 << " " << 2 << " " << 3 << endl;
            }
            else
            {
            	cout << "YES" << endl;
            	if(even == 1)
            	{
            		for(int i = 0; i < n;i++)
            		{
            			if(arr[i] % 2 == 1)
            			{
            				if(a == -1)a = i;
            				else if(a != -1 && b == -1)b = i;
            				else c = i;
						}
					}
					cout << a + 1 << " " << b + 1 << " " << c + 1 << endl;
				}
				else
				{
					for(int i = 0; i < n;i++)
					{
						if(arr[i] % 2 == 0)
						{
							(a == -1) ? a = i : b = i;
						}
						else if(arr[i] % 2 == 1) c = i;
					}
					cout << a + 1  << " " << b + 1  << " " << c + 1  << endl;
				}
			}
        }
        delete[]arr;
    }
	return 0;
}
