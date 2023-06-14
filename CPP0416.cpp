#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>

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
        int res = 0;
        int n, k;
        cin >> n >> k;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (mp[k - a[i]])
            {
                if (a[i] == k - a[i])
                {
                    res += mp[k - a[i]] - 1;
                }
                else
                {
                    res += mp[k - a[i]];
                }
            }
        }
        cout << res / 2 << endl;
    }
}
