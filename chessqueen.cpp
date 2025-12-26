#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool valid(vector<string> &grid, int r, int c)
{
    if (grid[r][c] == '*')
        return false;
    int i = r - 1, j = c - 1;
    while (i >= 0 && j >= 0)
    {
        if (grid[i][j] == 'q')
            return false;
        i--;
        j--;
    }
    j = c - 1;
    while (j >= 0)
    {
        if (grid[r][j] == 'q')
            return false;
        j--;
    }
    i = r + 1, j = c - 1;
    while (i < 8 && j >= 0)
    {
        if (grid[i][j] == 'q')
            return false;
        i++;
        j--;
    }
    return true;
}
void find(vector<string> &grid, int col, int &c)
{
    if (col == 8)
    {
        c++;
        return;
    }
    for (int r = 0; r < 8; r++)
    {
        if (valid(grid, r, col))
        {
            grid[r][col] = 'q';
            find(grid, col + 1, c);
            grid[r][col] = '.';
        }
    }
}
int main()
{
    vector<string> grid(8);
    for (int i = 0; i < 8; i++)
        cin >> grid[i];
    int c = 0;
    int col = 0;
    find(grid, col, c);
    cout << c << endl;
}