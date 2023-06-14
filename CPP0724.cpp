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
        int res = INT_MIN;
        for (int idxColumns = 0; idxColumns < m; idxColumns++)
        {
            vector<int> sum(n, 0);
            for (int j = idxColumns; j < m; j++)
            {
                int tmp = 0;
                for (int i = 0; i < n; i++)
                {
                    sum[i] += a[i][j];
                }
                for (int i = 0; i < n; i++)
                {
                    tmp += sum[i];
                    res = max(res, tmp);
                    tmp = max(0, tmp);
                }
            }
        }
        cout << res << endl;
    }
}
