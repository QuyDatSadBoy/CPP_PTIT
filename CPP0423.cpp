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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int sum = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= k)
            {
                ++sum;
            }
        }
        for (int i = 0; i < sum; i++)
        {
            if (a[i] <= k)
                ++cnt;
        }
        int res = cnt;
        for (int i = sum; i < n; i++)
        {
            if (a[i - sum] <= k)
                --cnt;
            if (a[i] <= k)
                ++cnt;
            res = max(res, cnt);
        }
        cout << sum - res << endl;
    }
}
