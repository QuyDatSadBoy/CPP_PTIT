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
        int n;
        cin >> n;
        ii p[1005];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i].first;
            p[i].second = i + 1;
        }
        sort(p + 0, p + n, [](ii a, ii b) -> bool
             { return a.first < b.first; });
        ll res = LLONG_MIN;
        ford(i, n - 1, 0)
        {
            foru(j, 0, i - 1)
            {
                if (p[i].first - p[j].first > res && p[i].second > p[j].second)
                {
                    res = p[i].first - p[j].first;
                    break;
                }
            }
        }
        res == LLONG_MIN ? cout << -1 : cout << res;
        cout << endl;
    }
}
