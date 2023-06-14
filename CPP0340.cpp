#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        string s;
        cin >> s;
        ll dp[m][n];
        fill(dp, 0);
        dp[0][(s[0] - '0') % n]++;
        for (int i = 1; i < m; i++)
        {
            dp[i][(s[i] - '0') % n]++;
            for (int j = 0; j < n; j++)
            {
                dp[i][j] += dp[i - 1][j];
                dp[i][(j * 10 + s[i] - '0') % n] += dp[i - 1][j];
            }
        }
        cout << dp[m - 1][0] << endl;
    }
}
