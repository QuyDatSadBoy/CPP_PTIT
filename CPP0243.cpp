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
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < m; i++)
        {
            if (mp[b[i]] != 0)
            {
                for (int j = 0; j < mp[b[i]]; j++)
                {
                    cout << b[i] << ' ';
                }
                mp.erase(b[i]);
            }
        }
        for (auto it : mp)
        {
            for (int i = 0; i < it.second; i++)
            {
                cout << it.first << ' ';
            }
        }
        cout << endl;
    }
}
