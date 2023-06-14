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
        string s;
        cin >> s;
        map<char, int> mp;
        vector<char> v;
        for (char x : s)
        {
            mp[x]++;
            v.push_back(x);
        }
        for (char x : v)
        {
            if (mp[x])
            {
                cout << x << mp[x];
                mp[x] = 0;
            }
        }
        cout << endl;
    }
}