#include <iostream>
using namespace std;
bool A(int n, int m)
{
	int c1 = 0,c2 = 0;
	while(n != 0)
	{
		c1+=(n%10);
		n/=10;
	}
	while(m != 0)
	{
		c2+=(m%10);
		m/=10;
	}
	if(c1 == (c2 )|| (c1) - (c2)== 1 || c2 - c1 == 1) return true;
	return false;
}

void ProblemB()
{
	int t;
    cin >> t;
    while(t--)
    {
    	int n;
    	cin >> n;
    	bool check = false;
    	if(n % 2 == 0)
    	{
    		int x = n/2;
    		while(!check)
    		{
    			int y = n - x;
    			if(A(x,y))
    			{
    				cout << x << " " << y << endl;
    				check = true;
				}
				x++;
			}
		}
		else
		{
			int x = n/3;
			while(!check)
			{
				int y = n - x;
				if(A(x,y))
				{
					cout << x << " " << y << endl;
					check = true;
				}
				x++;
			}
		}
	}
}

int main()
{
    //ProblemA();
    ProblemB();
    return 0;
}
