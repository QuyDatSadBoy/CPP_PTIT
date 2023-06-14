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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k, x;
        cin >> k >> x;
        int l, r;
        int m = lower_bound(all(a), x) - a.begin();
        if (a[m] == x)
        {
            l = m - 1;
            r = m + 1;
        }
        else
        {
            r = m;
            l = m - 1;
        }
        for (int i = k / 2 - 1; i >= 0; --i)
        {
            cout << a[l - i] << ' ';
        }
        for (int i = 0; i <= k / 2 - 1; i++)
        {
            cout << a[r++] << ' ';
        }
        cout << endl;
    }
}
