#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void rec(int n, int left, int right, int mid, vector<vector<int>> &move)
{
    if (n == 1)
    {
        move.push_back({left, right});
        return;
    }
    rec(n - 1, left, mid, right, move);
    move.push_back({left, right});
    rec(n - 1, mid, right, left, move);
}
int main()
{
    vector<vector<int>> move;
    int n;
    cin >> n;
    rec(n, 1, 3, 2, move);
    cout << move.size() << endl;
    for (auto m : move)
    {
        cout << m[0] << " " << m[1] << endl;
    }
}