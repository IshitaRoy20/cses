#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll x, y;
    while (n--)
    {
        cin >> x >> y;
        if (x <= y)
        {
            if (y % 2 != 0)
            {
                cout << (y * y) - (x - 1) << endl;
            }
            else
                cout << ((y - 1) * (y - 1)) + 1 + x - 1 << endl;
        }
        else
        {
            if (x % 2 == 0)
            {
                cout << (x * x) - (y - 1) << endl;
            }
            else
                cout << ((x - 1) * (x - 1)) + 1 + y - 1 << endl;
        }
    }
}