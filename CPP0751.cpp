#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
int n, m, X[100000 + 5], Y[100000 + 5];
int cnt[5]; // dem 0 1 2 3 4
int count(int x)
{
    if (x == 0)
    {
        return 0;
    }
    if (x == 1)
    {
        return cnt[0];
    }
    int res = 0;
    res += (Y + m - upper_bound(Y, Y + m, x));
    res += (cnt[0] + cnt[1]);
    if (x == 2)
    {
        res -= (cnt[3] + cnt[4]);
    }
    if (x == 3)
    {
        res += cnt[2];
    }
    return res;
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
        fill(cnt, 0);
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> X[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> Y[i];
            if (Y[i] < 5)
                cnt[Y[i]]++;
        }
        int res = 0;
        sort(Y, Y + m);
        for (int i = 0; i < n; i++)
        {
            res += count(X[i]);
        }
        cout << res << endl;
    }
}
