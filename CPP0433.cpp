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
        vector<ii> v;
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            mp[tmp]++;
        }
        for (auto it : mp)
        {
            v.push_back({it.first, it.second});
        }
        sort(all(v), [](ii a, ii b) -> bool
             {
            if(a.second!=b.second)
            {
                return a.second>b.second;
            }
            return a.first<b.first; });
        for (auto it : v)
        {
            foru(i, 1, it.second)
            {
                cout << it.first << ' ';
            }
        }
        cout << endl;
    }
}
