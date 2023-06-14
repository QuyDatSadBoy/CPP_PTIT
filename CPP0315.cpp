#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
void solve()
{
    string s;
    cin >> s;
    int i = s.size() - 1;
    while (i >= 1 && s[i] >= s[i - 1])
    {
        --i;
    }
    if (i == 0)
    {
        cout << -1 << endl;
        return;
    }
    --i;
    int j = s.size() - 1;
    while (s[j] >= s[i] || s[j] == s[j - 1])
    {
        --j;
    }
    swap(s[i], s[j]);
    cout << s << endl;
}
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
        solve();
    }
}
