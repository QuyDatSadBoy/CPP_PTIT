#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

ll powMod(ll a, ll b, ll m)
{
    ll res = 1;
    while (b)
    {
        if (b % 2 == 1)
        {
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
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
        string a;
        ll b, m;
        cin >> a >> b >> m;
        ll a1 = 0;
        for (int i = 0; i < a.size(); i++)
        {
            a1 = a1 * 10 + a[i] - '0';
            a1 %= m;
        }
        cout << powMod(a1, b, m) << endl;
    }
}
