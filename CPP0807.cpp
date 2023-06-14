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
    ifstream f("DATA.in");
    int n, m;
    f >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        f >> a[i];
        mp[a[i]] = 1;
    }
    for (int i = 0; i < m; i++)
    {
        f >> b[i];
        if (mp[b[i]] == 1)
            mp[b[i]] = 2;
    }
    for (auto it : mp)
    {
        if (it.second == 2)
            cout << it.first << ' ';
    }
    f.close();
}
