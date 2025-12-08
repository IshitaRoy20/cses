#include <bits/stdc++.h>
#define ll long long
ll mod = 1e9 + 7;
using namespace std;
ll power(ll a, ll b, ll c)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a % c;
    ll tmp = power(a, b / 2, c);
    if (b % 2 == 0)
        return (tmp * tmp) % c;
    else
        return (((tmp * tmp) % c) * a) % c;
}
int main()
{
    long long k;
    cin >> k;
    while (k--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long long m = power(b, c, mod - 1);
        cout << power(a, m, mod) << endl;
    }
}
