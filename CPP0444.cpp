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
        int n, x;
        cin >> n >> x;
        map<int, int> mp;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]] = i + 1;
        }
        sort(a, a + n);
        auto it = lower_bound(a, a + n, x);
        cout << mp[*it] << endl;
    }
}