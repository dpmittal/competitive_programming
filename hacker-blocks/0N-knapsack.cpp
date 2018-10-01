#include <bits/stdc++.h>
using namespace std;

int knapsack(int w, int n, int *weights, int *values, int dp[][1000])
{
    if (w == 0 || n == 0)
    {
        return dp[n][w] = 0;
    }

    if (dp[n][w] != -1)
    {
        return dp[n][w];
    }

    if (w - weights[n] < 0)
    {
        return dp[n][w] = knapsack(w, n - 1, weights, values, dp);
    }

    if (w - weights[n] >= 0)
    {
        return dp[n][w] = max(knapsack(w, n - 1, weights, values, dp), knapsack(w - weights[n], n, weights, values, dp) + values[n]);
    }
}

int main()
{

    int w, n;
    cin >> n >> w;

    int *weights = new int[n];
    int *values = new int[n];
    int dp[1000][1000];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
            dp[i][j] = -1;
    }

    for (int i = 1; i <= n; i++)
    {
        cin >> weights[i];
    }

    for (int i = 1; i <= n; i++)
    {
        cin >> values[i];
    }

    cout << knapsack(w, n, weights, values, dp)<<'\n';
    return 0;
}