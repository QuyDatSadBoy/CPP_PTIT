#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const ll MOD = 1e9 + 7;
const ll base = 31;
const ll maxn = 1e5 + 1;

ll Hash[maxn][11];
ll POW[11];

void init()
{
    POW[0] = 1;
    foru(i, 1, 10) POW[i] = (POW[i - 1] * base) % MOD;
}
ll getHash(int left, int right, int rows)
{
    return (Hash[rows][right] - Hash[rows][left - 1] * POW[right - left + 1] + 1ll * MOD * MOD) % MOD;
}
void solve()
{
    int n;
    cin >> n;
    vector<string> v(n);
    foru(i, 0, n - 1) cin >> v[i];
    foru(i, 0, n - 1)
    {
        v[i] = " " + v[i];
        foru(j, 1, v[i].size() - 1)
        {
            Hash[i][j] = (Hash[i][j - 1] * base + v[i][j] - 'a' + 1) % MOD;
        }
    }
    ll ans = 0;
    foru(i, 0, n - 1)
    {
        foru(j, 0, n - 1)
        {
            if (i == j)
                continue;
            int x = v[i].size() - 1;
            int y = v[j].size() - 1;
            foru(k, y, x)
            {
                if (Hash[j][y] == getHash(k - y + 1, k, i))
                {
                    ++ans;
                    break;
                }
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    init();
    solve();
}
