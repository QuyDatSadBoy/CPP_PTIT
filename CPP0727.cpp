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
        vector<ll> a(n), dp(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
            cout << a[0];
        else if (n == 2)
            cout << max(a[0], a[1]);
        else
        {
            dp[0] = a[0];
            dp[1] = max(a[1], a[0]);
            dp[2] = max(a[0] + a[2], a[1]);
            foru(i, 3, n - 1)
            {
                dp[i] = max(dp[i - 2], dp[i - 3]) + a[i];
            }
            cout << *max_element(all(dp));
        }
        cout << endl;
    }
}
