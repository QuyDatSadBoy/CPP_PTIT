#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));
#define all(v) v.begin(), v.end()
int main()
{
    int n, m, p;
    cin >> n >> m >> p;
    int a[n][m];
    int b[m][p];
    int res[n][p];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; ++j)
        {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << res[i][j] << ' ';
        }
        cout << endl;
    }
}
