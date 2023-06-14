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
        bool check = true;
        if (s[0] == '0')
            check = false;
        set<char> se;
        for (char x : s)
        {
            if (isalpha(x))
            {
                check = false;
                break;
            }
            else
            {
                se.insert(x);
            }
        }
        if (!check)
        {
            cout << "INVALID" << endl;
            continue;
        }
        if (se.size() == 10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
