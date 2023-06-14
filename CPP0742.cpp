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
        ii a[1005];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a, a + n);
        ll ans = 0;
        vector<bool> visited(n, false);
        for (int i = 0; i < n; i++)
        {
            if (a[i].second == i || visited[i] == true)
            {
                continue;
            }
            ll cnt = 0;
            int j = i;
            while (visited[j] == false)
            {
                ++cnt;
                visited[j] = true;
                j = a[j].second;
            }
            if (cnt > 0)
                ans += cnt - 1;
        }
        cout << ans << endl;
    }
}
