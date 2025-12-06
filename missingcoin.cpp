#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    ll val = 1;

    for (ll i = 0; i < n; i++)
    {
        if (arr[i] > val)
        {
            cout << val << endl;
            return 0;
        }
        else
            val += arr[i];
    }
    cout<<val;
}