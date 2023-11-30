#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>a;
        int b[101];
        for(int i = 0; i < 101;i++)
        {
            b[i] = 0;
        }
        for(int i = 0; i < n;i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        for(int i = 0; i < a.size();i++)
        {
            int index = (int)a[i];
            b[index]++;
        }
        int ans = 0;
        for(int i = 0; i < a.size();i++)
        {
            int index = (int)a[i];
            if(b[index] == 1)
            {
                ans = i+1;
                break;
            }
        }
        cout<< ans << endl;
    }
    return 0;
}
