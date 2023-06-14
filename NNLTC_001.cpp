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
    int n;
    vector<int> v;
    map<int, int> mp;
    while (cin >> n)
    {
        v.push_back(n);
        mp[n]++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (mp[v[i]] != 0)
        {
            cout << v[i] << ' ' << mp[v[i]] << endl;
            mp[v[i]] = 0;
        }
    }
}
