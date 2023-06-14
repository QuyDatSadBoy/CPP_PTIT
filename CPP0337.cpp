#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
void solve(string s)
{
    int cnt1[26] = {0};
    int len = 0;
    int res = INT_MAX;
    for (auto x : s)
    {
        if (cnt1[x - 'a'] == 0)
        {
            ++len;
            cnt1[x - 'a'] = 1;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        fill(cnt1, 0);
        int tmp = 0;
        for (int j = i; j < s.size(); j++)
        {
            if (cnt1[s[j] - 'a'] == 0)
            {
                ++tmp;
                cnt1[s[j] - 'a'] = 1;
            }
            if (tmp == len)
            {
                res = min(res, j - i + 1);
                break;
            }
        }
    }
    cout << res << endl;
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
        solve(s);
    }
}
