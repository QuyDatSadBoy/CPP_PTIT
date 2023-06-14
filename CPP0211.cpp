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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        b[n - 1] = a[n - 1];
        ford(i, n - 2, 0)
        {
            b[i] = max(a[i], b[i + 1]);
        }
        int l = 0, r = 0;
        ll res = LLONG_MIN;
        while (l < n && r < n)
        {
            if (a[l] <= b[r])
            {
                res = max(res, 1ll * abs(l - r));
                ++r;
            }
            else
            {
                ++l;
            }
        }
        cout << res << endl;
    }
}
