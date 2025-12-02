#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int c = 0;
    vector<long long> arr(n);
    vector<long long> left(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        left[i] = 0;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] < arr[i])
            {
                left[i] = j + 1;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << left[i] << " ";
    }
}
