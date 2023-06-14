#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>

ll powmod(ll x, ll y, ll p)
{
    ll res = 1;
    while (y)
    {
        if (y % 2 == 1)
        {
            res *= x;
            res %= p;
        }
        x *= x;
        x %= p;
        y /= 2;
    }
    return res;
}
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
        ll x, y, p;
        cin >> x >> y >> p;
        cout << powmod(x, y, p) << endl;
    }
}