#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
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
        int x, y, z, n;
        cin >> x >> y >> z >> n;
        ll Min = 1ll * pow(10, n - 1);
        ll bcnn = lcm(lcm(x, y), z);
        Min = (Min + bcnn - 1) / bcnn * bcnn;
        string res = to_string(Min);
        if (res.size() != n)
            cout << -1 << endl;
        else
            cout << res << endl;
    }
}