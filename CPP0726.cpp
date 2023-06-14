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
        string a;
        ll b, c;
        cin >> a >> b >> c;
        ll res = 0;
        for (int i = 0; i < a.size(); i++)
        {
            res = res * 10 + (a[i] - '0') * b;
            res %= c;
        }
        cout << res << endl;
    }
}