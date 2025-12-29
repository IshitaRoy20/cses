#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x0, y0, x1, y1, x2, y2;
        cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2;
        ll k = (x1 - x0) * (y2 - y0) - (x2 - x0) * (y1 - y0);
        if (k == 0)
            cout << "TOUCH" << '\n';
        else
        {
            cout << ((k > 0) ? "LEFT" : "RIGHT") << endl;
        }
    }
}