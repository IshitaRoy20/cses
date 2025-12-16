#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<pair<ll, ll>> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end());

    multiset<ll> st;
    ll ans = 0;

    for (int i = 0; i < k; i++)
        st.insert(a[i].second);

    for (int i = k; i < n; i++)
    {
        auto mn = st.begin();
        auto mx = st.rbegin();

        if (a[i].first >= *mn)
        {
            ans++;
            st.erase(mn);
            st.insert(a[i].second);
        }
        else if (a[i].second < *mx)
        {
            st.erase(st.find(*mx));
            st.insert(a[i].second);
        }
    }

    cout << ans + st.size() << endl;
}
