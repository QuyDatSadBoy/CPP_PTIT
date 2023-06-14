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
        int n, x;
        cin >> n >> x;
        int a[n];
        ll tmp = 1;
        ll b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = tmp;
            tmp *= x;
            tmp %= mod;
        }
        ll res = 0;
        for (int i = 0; i < n; i++)
        {
            res += a[i] * b[n - i - 1];
            res %= mod;
        }
        cout << res << endl;
    }
}
