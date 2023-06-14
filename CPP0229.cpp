#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
int a[105][105];
int n, m;
void solve()
{
    cout << a[1][1] << ' ';
    int r = 1;
    int c = 2;
    bool diChuyen = true;
    while (1)
    {
        if (diChuyen == true) // di xuong
        {
            while (r <= n && c >= 1)
            {
                cout << a[r][c] << ' ';
                ++r;
                --c;
            }
            diChuyen = false;
            if (r > n)
            {
                r = n;
                c += 2;
            }
            else
            {
                ++c;
            }
        }
        else // di len
        {
            while (r >= 1 && c <= m)
            {
                cout << a[r][c] << ' ';
                --r;
                ++c;
            }
            diChuyen = true;
            if (c > m)
            {
                r += 2;
                c = m;
            }
            else
            {
                ++r;
            }
        }
        if (r == n && c == m)
            break;
    }
    cout << a[n][m] << endl;
}
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
        cin >> n >> m;
        foru(i, 1, n)
        {
            foru(j, 1, m)
            {
                cin >> a[i][j];
            }
        }
        solve();
    }
}
