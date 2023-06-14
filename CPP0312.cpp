#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (ll i = a; i <= b; i++)
#define ford(i, b, a) for (ll i = b; i >= a; i--)
#define ms(a, n) memset(a, n, sizeof(a));
#define all(v) v.begin(), v.end()
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        set<char> se;
        for (auto x : s)
        {
            se.insert(x);
        }
        if (26 - se.size() <= k)
        {
            cout << 1;
        }
        else
            cout << 0;
        cout << endl;
    }
}
