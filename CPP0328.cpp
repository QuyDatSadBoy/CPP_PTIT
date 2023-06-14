#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
int cnt(string s, int x)
{
    int count = 0;
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        int tmp = 0;
        for (int j = i; j < len; j++)
        {
            tmp = tmp * 10 + (s[j] - '0');
            if (tmp % x == 0)
            {
                ++count;
            }
            tmp %= x;
        }
    }
    return count;
}
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
        string s;
        cin >> s;
        cout << cnt(s, 8) - cnt(s, 24) << endl;
    }
}
