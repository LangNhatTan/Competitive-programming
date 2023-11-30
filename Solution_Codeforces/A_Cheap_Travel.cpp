#include <iostream>
using namespace std;

void Nobita(){
	int n,m,a,b;
	cin >> n >> m >> a >> b;
	int c1 = n*a, c2 = 0, c3 = 0, c4 = 0;
	if(n <= m){
		a*n < b ? cout << a*n : cout << b;
		return;
	}
	c1 = n * a;
	if(n % m != 0){
		c2 = ((n/m)+1)*b;
		c3 = ((n/m)*b) + (n-(n/m)*m)*a;
	}
	else if(n % m == 0){
		c2 = (n/m)*b;
		c3 = c2;
	}
	int tmp = min(c1,c2);
	cout << min(tmp,c3);
	
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	Nobita();
	return 0;
}

