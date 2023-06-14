#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i && a[i][j])
            {
                a[i][j] = a[i - 1][j] + 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        vector<int> v;
        for (int j = 0; j < m; j++)
        {
            v.push_back(a[i][j]);
        }
        sort(all(v), greater<int>());
        for (int j = 0; j < m; j++)
        {
            a[i][j] = v[j];
        }
    }
    int result = 0;
    int tmp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            tmp = (j + 1) * a[i][j];
            result = max(tmp, result);
        }
    }
    cout << result << endl;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}