#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll ori(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3)
{
    ll val = (x3 - x2) * (y2 - y1) - (x2 - x1) * (y3 - y2);
    if (val > 0)
        return 1;
    else if (val < 0)
        return 2;
    return 0;
}

bool onseg(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3)
{
    return (x3 <= max(x1, x2)) && (x3 >= min(x1, x2)) &&
           (y3 <= max(y1, y2)) && (y3 >= min(y1, y2));
}

int main()

{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        ll ori1 = ori(x1, y1, x2, y2, x3, y3);
        ll ori2 = ori(x1, y1, x2, y2, x4, y4);
        ll ori3 = ori(x3, y3, x4, y4, x1, y1);
        ll ori4 = ori(x3, y3, x4, y4, x2, y2);

        if ((ori1 != ori2) && (ori4 != ori3))
            cout << "YES\n";
        else if (ori1 == 0 && onseg(x1, y1, x2, y2, x3, y3))
            cout << "YES\n";
        else if (ori2 == 0 && onseg(x1, y1, x2, y2, x4, y4))
            cout << "YES\n";
        else if (ori3 == 0 && onseg(x3, y3, x4, y4, x1, y1))
            cout << "YES\n";
        else if (ori4 == 0 && onseg(x3, y3, x4, y4, x2, y2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
