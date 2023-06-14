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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int res = 0;
        int maxx = INT_MIN;
        for (int i = 0; i < s.size(); i++)
        {
            if (isdigit(s[i]))
            {
                res = res * 10 + (s[i] - '0');
            }
            else
            {
                maxx = max(maxx, res);
                res = 0;
            }
        }
        cout << maxx << endl;
    }
}
