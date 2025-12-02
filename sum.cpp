#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, x;
    cin >> n >> x;
    int c = 0;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int t = x - arr[i];
        if (find(arr.begin(), arr.end(), t) != arr.end())
        {
            if (distance(arr.begin(), find(arr.begin(), arr.end(), t)) == i)
                continue;
            else
            {
                c = 1;
                cout << (i + 1) << " " << distance(arr.begin(), find(arr.begin(), arr.end(), t)) + 1 << endl;
                break;
            }
        }
    }
    if (c == 0)
        cout << "IMPOSSIBLE";
}
