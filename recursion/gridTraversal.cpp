#include <bits/stdc++.h>
using namespace std;
void makeGrid(vector<vector<int>> &grid)
{
    int n = grid.size();
    // Online C++ compiler to run C++ program online

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                grid[i][j] = -1;
            else
                grid[i][j] = 1;
        }
    }
    grid[n - 2][n - 2] = 5;
}
// brute force memoization problem
// int cntPath(vector<vector<int>> &grid, int i, int j)
// {
//     if (i == 1 && j == 1)
//         return 1;
//     if (i == 0 || j == 0)
//         return 0;

//     int right = cntPath(grid, i, j - 1);

//     int down = cntPath(grid, i - 1, j);

//     return right + down;
// }
long long int cntPath(vector<vector<long long int>> &memo, int i, int j)
{
    if (memo[i][j] != -1)
        return memo[i][j];
    if (memo[j][i] != -1)
        return memo[j][i];
    if (i == 1 && j == 1)
        return 1;
    if (i == 0 || j == 0)
        return 0;

    return memo[i][j] = cntPath(memo, i, j - 1) + cntPath(memo, i - 1, j);
}
void displayGrid(vector<vector<int>> &grid)
{
    for (auto rw : grid)
    {
        for (auto el : rw)
            cout << el << "\t";
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "enter the size " << endl;
    cin >> n;
    // vector<vector<int>> grid(n, vector<int>(n, 0));
    vector<vector<long long int>> memo(n + 1, vector<long long int>(n + 1, -1));
    // displayGrid(grid);
    // cout << endl
    //      << endl;
    // makeGrid(grid);
    long long int result = cntPath(memo, n, n);
    // displayGrid(grid);
    cout << "result is " << result << endl;
    return 0;
}