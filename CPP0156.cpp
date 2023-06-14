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
        ll b, p;
        cin >> b >> p;
        ll res = 0;
        for (ll i = 1; i < p; i++)
        {
            if ((i * i) % p == 1)
            {
                ll end = i + (b / p) * p;
                if (end > b)
                    end -= p;
                res += (end - i) / p + 1;
            }
        }
        cout << res << endl;
    }
}
