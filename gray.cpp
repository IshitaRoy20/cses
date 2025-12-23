#include <bits/stdc++.h>
using namespace std;
vector<string> gc(int n)
{
    if (n == 1)
        return {"0", "1"};

    vector<string> p = gc(n - 1), r = p;
    reverse(r.begin(), r.end());

    int sz = p.size();
    for (int i = 0; i < sz; i++)
    {
        p.push_back("0" + p[i]);
        p[i] = "1" + r[i];
    }
    return p;
}
int main()
{
    int n = 2;
    for (auto &s : gc(n))
        cout << s << endl;
    return 0;
}
