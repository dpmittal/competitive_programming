#include <bits/stdc++.h>
using namespace std;

int lcs(string a, string b, string c, int i, int j, int k, int dp[][100][100])
{
    if (i == 0 || j == 0 || k == 0)
    {
        return dp[i][j][k] = 0;
    }

    if (dp[i][j][k] != -1)
    {
        return dp[i][j][k];
    }

    if (a[i - 1] == b[j - 1] && b[j - 1] == c[k - 1])
    {
        return dp[i][j][k] = 1 + lcs(a, b, c, i - 1, j - 1, k - 1, dp);
    }

    else if (a[i - 1] != b[j - 1] || b[j - 1] != c[k - 1] || a[i - 1] != c[k - 1])
    {
        return dp[i][j][k] = max(lcs(a, b, c, i - 1, j, k, dp), max(lcs(a, b, c, i, j - 1, k, dp), lcs(a, b, c, i, j, k - 1, dp)));
    }
}

int main()
{
    short int t;
    cin >> t;
    while (t--)
    {
        int dp[100][100][100];
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < 100; j++)
            {
                for (int k = 0; k < 100; k++)
                    dp[i][j][k] = -1;
            }
        }

        string a;
        string b;
        string c;

        cin >> a >> b >> c;

        cout << lcs(a, b, c, a.length(), b.length(), c.length(), dp) << '\n';
    }
    return 0;
}