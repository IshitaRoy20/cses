#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int x1 = 0, x2 = 0;
    vector<long long> arr(n);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        x1 = x1 ^ arr[i];
        x2 = x2 ^ (i + 1);
    }
    x2 = x2 ^ n;
    cout << (x1 ^ x2);
}
