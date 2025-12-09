#include <bits/stdc++.h>
#define ll long long
using namespace std;
void find(ll div[])
{
    for (int i = 1; i < 1000005; i++)
    {
        for (int j = i; j < 1000005; j += i)
        {
            div[j]++;
        }
    }
}
int main()
{
    ll div[1000005] = {};
    find(div);
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        cout << div[arr[i]] << endl;
}