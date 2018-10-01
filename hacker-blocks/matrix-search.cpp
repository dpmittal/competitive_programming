#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[30][30];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }

    int r = 0;
    int c = n - 1;
    int key;
    cin >> key;
    int f = 0;

    while (r < m && c >= 0)
    {
        if (a[r][c] == key)
        {
            f = 1;
            break;
        }

        else if (a[r][c] < key)
        {
            r++;
        }

        else
        {
            c--;
        }
    }

    cout << f << '\n';
    return 0;
}