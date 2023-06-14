#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

bool check(string s)
{
    if (s.size() == 1)
        return false;
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        ++i;
        --j;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    auto cmp = [](const string a, const string b) -> bool
    {
        return a.size() != b.size() ? a.size() > b.size() : a > b;
    };
    map<string, int, decltype(cmp)> mp(cmp);
    string s;
    while (cin >> s)
    {
        if (check(s))
        {
            mp[s]++;
        }
    }
    for (auto &&i : mp)
    {
        cout << i.first << ' ' << i.second << endl;
    }
}
