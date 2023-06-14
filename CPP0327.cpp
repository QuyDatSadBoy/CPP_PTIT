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
        ll res = 0;
        ll a = 1;
        for (ll i = s.size() - 1; i >= 0; --i)
        {
            if (s[i] == '1')
            {
                res += a;
                res %= 5;
            }
            a *= 2;
            a %= 5;
        }
        res == 0 ? cout << "Yes" : cout << "No";
        cout << endl;
    }
}