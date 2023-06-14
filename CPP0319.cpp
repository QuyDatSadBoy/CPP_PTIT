#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>

void nNhat(ll n, ll s)
{
    --s;
    --n;
    string res = "";
    foru(i, 1, n)
    {
        if (s >= 9)
        {
            res += "9";
            s -= 9;
        }
        else
        {
            res = to_string(s) + res;
            s = 0;
        }
    }
    s += 1;
    res = to_string(s) + res;
    cout << res << ' ';
}
void lNhat(ll n, ll s)
{
    string res = "";
    foru(i, 1, n)
    {
        if (s >= 9)
        {
            res = "9" + res;
            s -= 9;
        }
        else
        {
            res += to_string(s);
            s = 0;
        }
    }
    cout << res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll m, s;
    cin >> m >> s;
    if (s > 9 * m || (s == 0 && m > 1))
    {
        cout << -1 << ' ' << -1;
    }
    else
    {
        nNhat(m, s);
        lNhat(m, s);
    }
}