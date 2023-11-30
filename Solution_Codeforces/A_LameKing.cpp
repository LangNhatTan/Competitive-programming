#include <iostream>
#include <cmath>
using namespace std;

int Dx(int x, int y, int a, int b, bool t1, bool t2)
{
	int count = 0;
	while(x != a || y != b)
	{
		if(x < a && !t1)
		{
			x++;
			t1 = true;
			t2 = false;
		}
		else if(x > a && !t1)
		{
			x--;
			t1 = true;
			t2 = false;
		}
		else if(y > b && !t2)
		{
			y--;
			t2 = true;
			t1 = false;
		}
		else if(y < b && !t2)
		{
			y++;
			t2 = true;
			t1 = false;
		}
		else
		{
			if(x == a)
			{
				t1 = true;
				t2 = false;
			}
			else if(y == b)
			{
				t2 = true;
				t1 = false;
			}
		}
		count++;
	}
	return count;
}


int Dy(int x, int y, int a, int b, bool t1, bool t2)
{
	int count = 0;
	while(x != a || y != b)
	{
		if(y > b && !t2)
		{
			y--;
			t2 = true;
			t1 = false;
		}
		else if(y < b && !t2)
		{
			y++;
			t2 = true;
			t1 = false;
		}
		else if(x < a && !t1)
		{
			x++;
			t1 = true;
			t2 = false;
		}
		else if(x > a && !t1)
		{
			x--;
			t1 = true;
			t2 = false;
		}
		else
		{
			if(x == a)
			{
				t1 = true;
				t2 = false;
			}
			else if(y == b)
			{
				t2 = true;
				t1 = false;
			}
		}
		count++;
	}
	return count;
}



int main()
{
	int t;
	cin >> t;
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	while(t--)
	{
		int a,b,x = 0, y = 0;
		cin >> a >> b;
		bool t1 = false, t2 = false;
		if(abs(a) > abs(b))
		{
			cout << Dx(x,y,a,b,t1,t2) << endl;
		}
		else cout << Dy(x,y,a,b,t1,t2) << endl;
	}
	return 0;
}
