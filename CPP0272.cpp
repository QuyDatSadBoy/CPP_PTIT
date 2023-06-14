#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
ll powMod(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
        {
            res *= a;
            res %= mod;
        }
        a *= a;
        a %= mod;
        b >>= 1;
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
        int n;
        cin >> n;
        ll a[n];
        ll hx = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            hx *= a[i];
            hx %= mod;
        }
        ll gx = a[0];
        for (int i = 1; i < n; i++)
        {
            gx = 1ll * __gcd(gx, a[i]);
            gx %= mod;
        }
        cout << powMod(hx, gx) << endl;
    }
}
