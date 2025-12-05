#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll power(ll a, ll b, ll c = (pow(10, 9) + 7))
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a % c;
    ll tmp = power(a, b / 2);
    if (b % 2 == 0)
        return (tmp * tmp) % c;
    else
        return (((tmp * tmp) % c) * a) % c;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        cout << power(a, b) << endl;
    }
}