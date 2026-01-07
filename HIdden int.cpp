#include <bits/stdc++.h>
using namespace std;
bool ask(int x)
{
    cout << "?" << " " << x << endl;
    string res;
    cin >> res;
    return res == "YES";
}
int main()
{
    int l = 1, r = 1e9;
    int res = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ask(mid))
            l = mid + 1;
        else
        {
            r = mid - 1;
            res = mid;
        }
    }
    cout << "!" << " " << res;
}