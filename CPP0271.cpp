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
        int n, m, k;
        cin >> n >> m >> k;
        int a[505][505] = {0};
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
                a[i][j] = a[i - 1][j] + a[i][j - 1] + a[i][j] - a[i - 1][j - 1];
            }
        }
        for (int i = k; i <= n; i++)
        {
            for (int j = k; j <= m; j++)
            {
                cout << (a[i][j] - a[i - k][j] - a[i][j - k] + a[i - k][j - k]) / (k * k) << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }
}
