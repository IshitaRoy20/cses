#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> mp;
    ll dis = 0;
    for (int i = 0; i < k; i++)
    {
        if (mp[arr[i]] == 0)
            dis++;
        mp[arr[i]]++;
    }
    cout << dis << " ";
    for (int i = k; i < n; i++)
    {
        mp[arr[i - k]]--;
        if (mp[arr[i - k]] == 0)
            dis--;
        if (mp[arr[i]] == 0)
            dis++;
        mp[arr[i]]++;
        cout << dis << " ";
    }
}
