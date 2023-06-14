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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // 2 5 12 22 34
            if (i > 0)
                a[i] += a[i - 1];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            // 1 6 13 21
            if (i > 0)
                b[i] += b[i - 1];
        }
        int minSize = min(n, m);
        int res = INT_MIN;
        for (int i = 0; i < minSize; i++)
        {
            res = max(res, max(a[i] + b[m - 1] - b[i], b[i] + a[n - 1] - a[i]));
        }
        cout << res << endl;
    }
}
